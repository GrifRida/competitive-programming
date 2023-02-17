# my code for qualification round of hash code 2022
# to test this code, the input files must be named like that: a.in, b.in ...
# output files are a.out, b.out ...
# my team was Lissasfa (classé 754)
# my handle GRIF
files = ['a', 'b', 'c', 'd', 'e','f']
for file in files:
    fi = open(file+'.in','r')
    fo = open(file+'.out','w')
    c, p = map(int,fi.readline().split())
    contributors = {}
    projects = {}
    skills = {}
    for i in range(c):
        l = fi.readline().split()
        contributors[l[0]] = []
        for j in range(int(l[1])):
            contributors[l[0]].append(fi.readline().split())
            contributors[l[0]][j][1] = int(contributors[l[0]][j][1])
            if contributors[l[0]][j][0] in skills:
                skills[contributors[l[0]][j][0]].append([l[0],contributors[l[0]][j][1]])
            else:
                skills[contributors[l[0]][j][0]] = [l[0],contributors[l[0]][j][1]]
    for i in range(p):
        l = fi.readline().split()
        projects[l[0]] = [[int(e) for e in l[1:]],[]]
        for j in range(projects[l[0]][0][3]):
            projects[l[0]][1].append(fi.readline().split())
            projects[l[0]][1][j][1] = int(projects[l[0]][1][j][1])
    list_project = [[e, projects[e][0][0], projects[e][0][1], projects[e][0][2]] for e in projects]
    list_project.sort(key=lambda x:(-x[2] + x[3]**2))
    out = []
    for i in range(len(list_project)):
        out.append([list_project[i][0]])
        for k in range(len(projects[list_project[i][0]][1])):
            for j in range(len(skills[projects[list_project[i][0]][1][k][0]])):
                if  skills[projects[list_project[i][0]][1][k][0]][1] >= projects[list_project[i][0]][1][k][1] and not(skills[projects[list_project[i][0]][1][k][0]][0] in out[i]):
                    out[i].append(skills[projects[list_project[i][0]][1][k][0]][0])
                    break
    out_final = []
    for e in out:
        if len(projects[e[0]][1]) == len(e) - 1:
            out_final.append(e)
    fo.write(str(len(out_final)) + '\n')
    for e in out_final:
        fo.write(e[0] + '\n')
        fo.write(' '.join(e[1:]))
        fo.write('\n')
    print(file + ' done')
    fi.close()
    fo.close()
