def solution(id_list, report, k):
    reported_list = [[0]*len(id_list) for i in range(len(id_list))]
    reporter = ''
    reported = ''
    banned = [0]*len(id_list)
    counter = 0
    answer = [0]*len(id_list) ## number of reports
    a = 0
    b = 0
    for i in report:
        reporter, reported = i.split(' ')
        reported_list[id_list.index(reporter)][id_list.index(reported)] = 1
    for i in range(len(id_list)):
        for l in range(len(id_list)):
            if(reported_list[l][i] == 1):
                counter += 1
        banned[i] = counter
        counter = 0
    
    for i in range(len(banned)):
        if banned[i] >= k:
            banned[i] = 1
        else:
            banned[i] = 0
        
    for i in range(len(id_list)):
        if (banned[i] == 1):
            for l in range(len(id_list)):
                if (reported_list[l][i] == 1):
                    answer[l] += 1
    
    return answer