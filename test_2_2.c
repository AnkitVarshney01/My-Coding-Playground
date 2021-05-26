#include <stdio.h>

struct time
{
    int hrs,mins,secs;
};

void display(struct time t)
{
    printf("%02d:%02d:%02d",t.hrs,t.mins,t.secs);
}

struct time addtime(struct time t1, struct time t2)
{
    struct time t3,temp;

    t3.secs=t1.secs + t2.secs;
    t3.mins=t1.mins+t2.mins;
    t3.hrs=t1.hrs+t2.hrs;
    
    temp.secs=t3.secs%60;
    if((t1.secs+t2.secs)>temp.secs)
    {
        t3.mins++;
        t3.secs=temp.secs;
    }

    temp.mins = t3.mins % 60;
    if ((t1.mins + t2.mins) > temp.mins)
    {
        t3.mins=temp.mins;
        t3.hrs++;
    }

    temp.hrs = t3.hrs % 24;
    if ((t1.hrs + t2.hrs) > temp.hrs)
    {
        t3.hrs = temp.hrs;
    }
    if(temp.hrs==24)
    {
        t3.hrs=0;
    }
    return t3;
}

struct time addseconds(struct time t1, int sec)
{
    struct time t3, temp;

    t3.secs = t1.secs + sec;
    t3.mins = t1.mins;
    t3.hrs = t1.hrs ;

    temp.secs = t3.secs % 60;
    if (t1.secs > temp.secs)
    {
        t3.mins++;
        t3.secs = temp.secs;
    }

    temp.mins = t3.mins % 60;
    if (t1.mins > temp.mins)
    {
        t3.mins = temp.mins;
        t3.hrs++;
    }

    temp.hrs = t3.hrs % 24;
    if (t1.hrs > temp.hrs)
    {
        t3.hrs = temp.hrs;
    }
    
    return t3;
}

int main()
{
    struct time t1,t2;
    printf("Enter hours:");
    scanf("%d",&t1.hrs);
    printf("Enter mins:");
    scanf("%d",&t1.mins);
    printf("Enter secs:");
    scanf("%d",&t1.secs);
    printf("Enter hours(2):");
    scanf("%d",&t2.hrs);
    printf("Enter mins(2):");
    scanf("%d",&t2.mins);
    printf("Enter secs(2):");
    scanf("%d",&t2.secs);

    printf("T1 Time Displaying:");
    display(t1);

    struct time t3=addtime(t1,t2);
    printf("\n");
    printf("Time after adding t1 and t2: ");
    display(t3);
    int sec;
    printf("\nEnter seconds to add in time t1: ");
    scanf("%d", &sec);
    struct time t4=addseconds(t1,sec);
    printf("Time after adding %d seconds to t1 time: ",sec);
    display(t4);

    return 0;
}