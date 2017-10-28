# Enter your code here. Read input from STDIN. Print output to STDOUT

s0 = list();
s1 = list();
lastans = 0;

n,q = map(int, raw_input().split());

while(q > 0):
    k,x,y = map(int,raw_input().split())
    if(k == 1):
        if(bool(x) == bool(lastans)):
            s0.append(y);
        
        else:
            s1.append(y);
        
    
    if(k == 2):
        if(bool(x) and bool(lastans)):
            lastans = s0[y % len(s0)];
        
        else:
            lastans = s1[y % len(s1)];
        
        print lastans;
    
    q -= 1;
