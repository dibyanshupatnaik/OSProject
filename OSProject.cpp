#include <iostream>
#include <thread>
#include<conio.h>
#include<windows.h>
#include <algorithm>
#include<fstream>
#include <chrono>
#include <ctime>
using namespace std;
int a,b,c,d,i=-1;;
int rear[4]={-1,-1,-1,-1};
int coun[4]={0,0,0,0};
int wait[4]={0,0,0,0};
int pc=0;
int ma, maxi;


//This is the function that will run in parallel
// It will be passed to the thread
void thread_method() {
    std::this_thread::sleep_for(std::chrono::milliseconds(500));
	//cout << "Function running in thread 1";
    a=GetTickCount()%10+1;
    cout<<a;
	//std::this_thread::sleep_for(std::chrono::milliseconds(500));
}
void thread_method2() {
    std::this_thread::sleep_for(std::chrono::milliseconds(250));
	//cout << "Function running in thread 2";
	b=GetTickCount()%10+1;
	cout<<b;
}
void thread_method3() {
    std::this_thread::sleep_for(std::chrono::milliseconds(700));
	//cout << "Function running in thread 3";
    c=GetTickCount()%10+1;
    cout<<c;
}

void thread_method4() {
    std::this_thread::sleep_for(std::chrono::milliseconds(700));
	//cout << "Function running in thread 4";
    d=GetTickCount()%10+1;
    cout<<d;
}

void enqueue(int q[],int size, int nu)
 {
    int e;
    i=rear[nu];
    int len=size;
    while(--size>=0)
    {
        rear[nu]=rear[nu]+1;
    }
    //int len= rear[nu];
    cout<<"rear"<<rear[nu]<<endl;

	while(--len>=0)
    {
        i++;

        e= rand()%10+1;
        string x;
        cout<<"e"<<e<<endl;
        if(e==9)
        {
            q[i]=e;
        }
        else if(e==10)
        {
            q[i]=e;
        }
        else
        {
            q[i]=1;
        }
    }
    for(int j=0;j<=rear[nu];j++)
    {
        cout<<q[j]<<endl;
    }
    cout<<endl;
 }
 void enqueue2(int q[],int size, int nu)
 {
    int e;
    i=rear[nu];
    int len=size;
    while(--size>=0)
    {
        rear[nu]=rear[nu]+1;
    }
    //int len= rear[nu];
    cout<<"rear"<<rear[nu]<<endl;

	while(--len>=0)
    {
        i++;

        e= (rand()*i*i)%10+1;
        string x;
        cout<<"e"<<e<<endl;
        if(e==9)
        {
            q[i]=e;
        }
        else if(e==10)
        {
            q[i]=e;
        }
        else
        {
            q[i]=1;
        }
    }
    for(int j=0;j<=rear[nu];j++)
    {
        cout<<q[j]<<endl;
    }
    cout<<endl;
 }
 void enqueue3(int q[],int size, int nu)
 {
    int e;
    i=rear[nu];
    int len=size;
    while(--size>=0)
    {
        rear[nu]=rear[nu]+1;
    }
    //int len= rear[nu];
    cout<<"rear"<<rear[nu]<<endl;

	while(--len>=0)
    {
        i++;

        e= (rand()*i*i)%10+1;
        string x;
        cout<<"e"<<e<<endl;
        if(e==9)
        {
            q[i]=e;
        }
        else if(e==10)
        {
            q[i]=e;
        }
        else
        {
            q[i]=1;
        }
    }
    for(int j=0;j<=rear[nu];j++)
    {
        cout<<q[j]<<endl;
    }
    cout<<endl;
 }
 void enqueue4(int q[],int size, int nu)
 {
    int e;
    i=rear[nu];
    int len=size;
    while(--size>=0)
    {
        rear[nu]=rear[nu]+1;
    }
    //int len= rear[nu];
    cout<<"rear"<<rear[nu]<<endl;

	while(--len>=0)
    {
        i++;

        e= (rand()%10+1);
        string x;
        cout<<"e"<<e<<endl;
        if(e==9)
        {
            q[i]=e;
        }
        else if(e==10)
        {
            q[i]=e;
        }
        else
        {
            q[i]=1;
        }
    }
    for(int j=0;j<=rear[nu];j++)
    {
        cout<<q[j]<<endl;
    }
    cout<<endl;
 }


 void delq(int q[], int _rear, int nu)
 {
     int f;
     do{
            f=rand()%10;
         cout<<"\n in 0 Delete how many?"<<" "<<f<<" ";

         //cin>>f;
     }while(f>=_rear+1);
     while(--f>=0)
     {
         for(int i=0; i<_rear; i++)//as rear is index and not length
         {
             q[i]=q[i+1];
         }
     _rear--;
     }
     for(int i=0; i<=_rear; i++)
        cout<<q[i];
    rear[0]=_rear;

 }


  void delqrr(int q[], int _rear, int nu, int f)
 {
     //int f;
     do{
            //f=6;
            while(f>=_rear+1)
                f--;
         cout<<"\n in 0 Delete how many?"<<" "<<f<<" ";

         //cin>>f;
     }while(f>=_rear+1);
     while(--f>=0)
     {
         for(int i=0; i<_rear; i++)//as rear is index and not length
         {
             q[i]=q[i+1];
         }
     _rear--;
     }
     for(int i=0; i<=_rear; i++)
        cout<<q[i];
    rear[0]=_rear;

 }


 void delq1(int q[], int _rear, int nu)
 {
     int f;
     do{
         f=rand()%10;
         cout<<"\n in 1 Delete how many?"<<" "<<f<<" ";

         //cin>>f;
     }while(f>=_rear+1);
     while(--f>=0)
     {
         for(int i=0; i<_rear; i++)//as rear is index and not length
         {
             q[i]=q[i+1];
         }
     _rear--;
     }
     for(int i=0; i<=_rear; i++)
        cout<<q[i];
    rear[1]=_rear;
 }

 void delq1rr(int q[], int _rear, int nu, int f)
 {
     //int f;
     do{
         //f=6;
         while(f>=_rear+1)
                f--;
         cout<<"\n in 1 Delete how many?"<<" "<<f<<" ";

         //cin>>f;
     }while(f>=_rear+1);
     while(--f>=0)
     {
         for(int i=0; i<_rear; i++)//as rear is index and not length
         {
             q[i]=q[i+1];
         }
     _rear--;
     }
     for(int i=0; i<=_rear; i++)
        cout<<q[i];
    rear[1]=_rear;
 }



 void delq2(int q[], int _rear, int nu)
 {
     int f;
     do{
         f=rand()%10;
         cout<<"\n in 2 Delete how many?"<<" "<<f<<" ";

         //cin>>f;
     }while(f>=_rear+1);
     while(--f>=0)
     {
         for(int i=0; i<_rear; i++)//as rear is index and not length
         {
             q[i]=q[i+1];
         }
     _rear--;
     }
     for(int i=0; i<=_rear; i++)
        cout<<q[i];
    rear[2]=_rear;

 }

 void delq2rr(int q[], int _rear, int nu, int f)
 {

     do{
         //f=6;
         while(f>=_rear+1)
                f--;
         cout<<"\n in 2 Delete how many?"<<" "<<f<<" ";

         //cin>>f;
     }while(f>=_rear+1);
     while(--f>=0)
     {
         for(int i=0; i<_rear; i++)//as rear is index and not length
         {
             q[i]=q[i+1];
         }
     _rear--;
     }
     for(int i=0; i<=_rear; i++)
        cout<<q[i];
    rear[2]=_rear;

 }

 void delq3(int q[], int _rear, int nu)
 {
     int f;
     do{
         f=rand()%10;
         cout<<"\n in 3 Delete how many?"<<" "<<f<<" ";

         //cin>>f;
     }while(f>=_rear+1);
     while(--f>=0)
     {
         for(int i=0; i<_rear; i++)//as rear is index and not length
         {
             q[i]=q[i+1];
         }
     _rear--;
     }
     for(int i=0; i<=_rear; i++)
        cout<<q[i];
     rear[3]=_rear;

 }

 void delq3rr(int q[], int _rear, int nu, int f)
 {

     do{
         //f=6;
         while(f>=_rear+1)
                f--;
         cout<<"\n in 3 Delete how many?"<<" "<<f<<" ";

         //cin>>f;
     }while(f>=_rear+1);
     while(--f>=0)
     {
         for(int i=0; i<_rear; i++)//as rear is index and not length
         {
             q[i]=q[i+1];
         }
     _rear--;
     }
     for(int i=0; i<=_rear; i++)
        cout<<q[i];
     rear[3]=_rear;

 }




int main() {

    int queue1[100],queue2[100],queue3[100],queue4[100];
    int inpu;


    fstream fs;
    fs.open("OStry.txt",ios::out);
    if(!fs)
        {
            cout<<"File creation failed";
        }
        else
        {
            cout<<"New file created";
            time_t timer;
            struct tm y2k = {0};
            double seconds;

            y2k.tm_hour = 0;   y2k.tm_min = 0; y2k.tm_sec = 0;
            y2k.tm_year = 100; y2k.tm_mon = 0; y2k.tm_mday = 1;

            time(&timer);  /* get current time; same as: timer = time(NULL)  */

            seconds = difftime(timer,mktime(&y2k));
            seconds-=400000000;
            fs<<seconds<<endl;
            //fs.close();
        }


    do{
    cout<<"Enter any character to exit. The operation will stop";
    cout<<"\nThe Program has been slowed down to make it more visual. Although it might be confusing now, the program works as intended, which will be demonstrated while presenting";
    cout<<"\n\nEnter 1 for Random\nEnter 2 for Round Robin";
    cin>>inpu;

    pc=0;

    //fs<<std::chrono::system_clock;
	//This statement will launch thread in parallel to main function
	if(inpu==1)
    {

        thread t(thread_method);
        thread t2(thread_method2);
        thread t3(thread_method3);
        thread t4(thread_method4);

        //std::this_thread::sleep_for(std::chrono::milliseconds(200));
        cout << "The main function execution\n";
        //cout<<GetTickCount()%10;

        Sleep(1500);

        cout<<endl<<"a"<<a<<b<<c<<d;
        thread t5(enqueue,queue1,a,0);
        //enqueue(queue1,a,0);
        std::this_thread::sleep_for(std::chrono::milliseconds(200));
        thread t6(enqueue2,queue2,b,1);
        //enqueue2(queue2,b,1);
        std::this_thread::sleep_for(std::chrono::milliseconds(400));
        thread t7(enqueue3,queue3,c,2);
        //enqueue3(queue3,c,2);
        std::this_thread::sleep_for(std::chrono::milliseconds(600));
        thread t8(enqueue4,queue4,d,3);
        //enqueue4(queue4,d,3);
        std::this_thread::sleep_for(std::chrono::milliseconds(800));
        //This is how we join the new thread with main

        //delq1(queue2,rear[1],1);
        //delq1(queue1, rear[0], 0);
        //thread t10(delq,queue1,rear[0],0);
        //thread t9(delq1,queue2,rear[1],1);
        //thread t11(delq2,queue3,rear[2],2);
        //thread t12(delq3,queue4,rear[3],3);



        //File Management
        pc++;
        for(int i=0; i<=3; i++)
        {
            wait[i]+=rear[i];
            wait[i]++;
            fs<<rear[i];
            cout<<"1st to file";
        }

        delq(queue1,rear[0],0);
        delq1(queue2,rear[1],1);
        delq2(queue3,rear[2],2);
        delq3(queue4,rear[3],3);


    //2nd___________________________________________


        //Highest Weight

        thread t0(thread_method);
        thread t20(thread_method2);
        thread t30(thread_method3);
        thread t40(thread_method4);

        cout << "The main function execution\n";
        //cout<<GetTickCount()%10;

        Sleep(1500);

        cout<<endl<<"a"<<a<<b<<c<<d;
        thread t50(enqueue,queue1,a,0);
        //enqueue(queue1,a,0);
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
        thread t60(enqueue2,queue2,b,1);
        //enqueue2(queue2,b,1);
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
        thread t70(enqueue3,queue3,c,2);
        //enqueue3(queue3,c,2);
        std::this_thread::sleep_for(std::chrono::milliseconds(1500));
        thread t80(enqueue4,queue4,d,3);
        //enqueue4(queue4,d,3);
        std::this_thread::sleep_for(std::chrono::milliseconds(2000));
        //This is how we join the new thread with main


        while(true)
        {
            coun[0]=0;
            coun[1]=0;
            coun[2]=0;
            coun[3]=0;
            for(int i=0; i<=rear[0]; i++)
            {
                coun[0]+=queue1[i];
            }
            cout<<endl<<coun[0];
            for(int i=0; i<=rear[1]; i++)
            {
                coun[1]+=queue2[i];
            }
            cout<<coun[1];
            for(int i=0; i<=rear[2]; i++)
            {
                coun[2]+=queue3[i];
            }
            cout<<coun[2];
            for(int i=0; i<=rear[3]; i++)
            {
                coun[3]+=queue4[i];
            }
            cout<<coun[3];
            ma=*max_element(coun,coun+4);
            cout<<endl<<"Max"<<endl<<ma;

            for(int i=0; i<=3; i++)
            {
                 if(ma==coun[i])
                    maxi=i;
            }


            pc++;
            for(int i=0; i<=3; i++)
            {
                wait[i]+=rear[i];
                wait[i]++;
                fs<<rear[i];
                cout<<"2nd to file";
            }

            delq(queue1,rear[0],0);
            delq1(queue2,rear[1],1);
            delq2(queue3,rear[2],2);
            delq3(queue4,rear[3],3);


            thread t0(thread_method);
            thread t20(thread_method2);
            thread t30(thread_method3);
            thread t40(thread_method4);

            //std::this_thread::sleep_for(std::chrono::milliseconds(200));
            cout << "The main function execution\n";
            //cout<<GetTickCount()%10;

            Sleep(1500);

            cout<<endl<<"a"<<a<<b<<c<<d;
            thread t50(enqueue,queue1,a,0);
            //enqueue(queue1,a,0);
            std::this_thread::sleep_for(std::chrono::milliseconds(500));
            thread t60(enqueue2,queue2,b,1);
            //enqueue2(queue2,b,1);
            std::this_thread::sleep_for(std::chrono::milliseconds(1000));
            thread t70(enqueue3,queue3,c,2);
            //enqueue3(queue3,c,2);
            std::this_thread::sleep_for(std::chrono::milliseconds(1500));
            thread t80(enqueue4,queue4,d,3);
            //enqueue4(queue4,d,3);
            std::this_thread::sleep_for(std::chrono::milliseconds(2000));
            //This is how we join the new thread with main



            //delq1(queue2,rear[1],1);
            //delq1(queue1, rear[0], 0);
            //thread t10(delq,queue1,rear[0],0);
            //thread t9(delq1,queue2,rear[1],1);
            //thread t11(delq2,queue3,rear[2],2);
            //thread t12(delq3,queue4,rear[3],3);

            t0.join();
            t20.join();
            t30.join();
            t40.join();
            t50.join();
            t60.join();
            t70.join();
            t80.join();
            //t9.join();
            //t10.join();
            //t11.join();
            //t12.join();

            if(kbhit())
            {
                //cout<<"Yo";
                char ch = getch();
                cout<<ch;

                pc++;
                for(int i=0; i<=3; i++)
                {
                    wait[i]+=rear[i];
                    wait[i]++;
                    fs<<rear[i];
                    cout<<"1st to file";
                }

                if(ch=='d')
                {
                    cout<<"Hello";
                    cout<<endl;
                    for(i=0; i<=rear[0]; i++)
                        cout<<queue1[i];
                    cout<<endl;
                    for(i=0; i<=rear[1]; i++)
                        cout<<queue2[i];
                    cout<<endl;
                    for(i=0; i<=rear[2]; i++)
                        cout<<queue3[i];
                    cout<<endl;
                    for(i=0; i<=rear[3]; i++)
                        cout<<queue4[i];

                    cout<<"\n\nAverage Wait Time:";
                    for(int i=0; i<=3; i++)
                        cout<<endl<<endl<<wait[i]<<" "<<pc;
                }
                fs.close();
                break;
            }
        }
        t.join();
        t2.join();
        t3.join();
        t4.join();
        t5.join();
        t6.join();
        t7.join();
        t8.join();
    }
    else if(inpu==2)
    {
        int f=6, flag=0;
        do{
                if(f==0)
                {
                    f=rand()%9+1;
                    cout<<"\nTaking value of f as: "<<f;
                }
                else if(f>=10)
                {
                    cout<<"\nNot an optimum value of f. Enter numbers between 0 to 10";
                    cin>>f;
                }
                else
                {
                    cout<<"\nEnter Time for Round Robin (Enter 0 for random selection)";
                    cin>>f;
                }

        }while(f>=10||f==0);


        thread t(thread_method);
        thread t2(thread_method2);
        thread t3(thread_method3);
        thread t4(thread_method4);

        //std::this_thread::sleep_for(std::chrono::milliseconds(200));
        cout << "The main function execution\n";
        //cout<<GetTickCount()%10;

        Sleep(1500);

        cout<<endl<<"a"<<a<<b<<c<<d;
        thread t5(enqueue,queue1,a,0);
        //enqueue(queue1,a,0);
        std::this_thread::sleep_for(std::chrono::milliseconds(200));
        thread t6(enqueue2,queue2,b,1);
        //enqueue2(queue2,b,1);
        std::this_thread::sleep_for(std::chrono::milliseconds(400));
        thread t7(enqueue3,queue3,c,2);
        //enqueue3(queue3,c,2);
        std::this_thread::sleep_for(std::chrono::milliseconds(600));
        thread t8(enqueue4,queue4,d,3);
        //enqueue4(queue4,d,3);
        std::this_thread::sleep_for(std::chrono::milliseconds(800));
        //This is how we join the new thread with main



        //delq1(queue2,rear[1],1);
        //delq1(queue1, rear[0], 0);
        //thread t10(delq,queue1,rear[0],0);
        //thread t9(delq1,queue2,rear[1],1);
        //thread t11(delq2,queue3,rear[2],2);
        //thread t12(delq3,queue4,rear[3],3);

        pc++;
        for(int i=0; i<=3; i++)
        {
            wait[i]+=rear[i];
            wait[i]++;
            fs<<rear[i];
            cout<<"1st to file";
        }

        delqrr(queue1,rear[0],0, f);
        delq1rr(queue2,rear[1],1, f);
        delq2rr(queue3,rear[2],2, f);
        delq3rr(queue4,rear[3],3, f);





    //2nd___________________________________________


        //Highest Weight

        thread t0(thread_method);
        thread t20(thread_method2);
        thread t30(thread_method3);
        thread t40(thread_method4);

        cout << "The main function execution\n";
        //cout<<GetTickCount()%10;

        Sleep(1500);

        cout<<endl<<"a"<<a<<b<<c<<d;
        thread t50(enqueue,queue1,a,0);
        //enqueue(queue1,a,0);
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
        thread t60(enqueue2,queue2,b,1);
        //enqueue2(queue2,b,1);
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
        thread t70(enqueue3,queue3,c,2);
        //enqueue3(queue3,c,2);
        std::this_thread::sleep_for(std::chrono::milliseconds(1500));
        thread t80(enqueue4,queue4,d,3);
        //enqueue4(queue4,d,3);
        std::this_thread::sleep_for(std::chrono::milliseconds(2000));
        //This is how we join the new thread with main


        while(true)
        {
            coun[0]=0;
            coun[1]=0;
            coun[2]=0;
            coun[3]=0;
            for(int i=0; i<=rear[0]; i++)
            {
                coun[0]+=queue1[i];
            }
            cout<<endl<<coun[0];
            for(int i=0; i<=rear[1]; i++)
            {
                coun[1]+=queue2[i];
            }
            cout<<coun[1];
            for(int i=0; i<=rear[2]; i++)
            {
                coun[2]+=queue3[i];
            }
            cout<<coun[2];
            for(int i=0; i<=rear[3]; i++)
            {
                coun[3]+=queue4[i];
            }
            cout<<coun[3];
            ma=*max_element(coun,coun+4);
            cout<<endl<<"Max"<<endl<<ma;

            for(int i=0; i<=3; i++)
            {
                 if(ma==coun[i])
                    maxi=i;
            }

            pc++;
            for(int i=0; i<=3; i++)
            {
                wait[i]+=rear[i];
                wait[i]++;
                fs<<rear[i];
                cout<<"1st to file";
            }

            delqrr(queue1,rear[0],0, f);
            delq1rr(queue2,rear[1],1, f);
            delq2rr(queue3,rear[2],2, f);
            delq3rr(queue4,rear[3],3, f);


            thread t0(thread_method);
            thread t20(thread_method2);
            thread t30(thread_method3);
            thread t40(thread_method4);

            //std::this_thread::sleep_for(std::chrono::milliseconds(200));
            cout << "The main function execution\n";
            //cout<<GetTickCount()%10;

            Sleep(1500);

            cout<<endl<<"a"<<a<<b<<c<<d;
            thread t50(enqueue,queue1,a,0);
            //enqueue(queue1,a,0);
            std::this_thread::sleep_for(std::chrono::milliseconds(500));
            thread t60(enqueue2,queue2,b,1);
            //enqueue2(queue2,b,1);
            std::this_thread::sleep_for(std::chrono::milliseconds(1000));
            thread t70(enqueue3,queue3,c,2);
            //enqueue3(queue3,c,2);
            std::this_thread::sleep_for(std::chrono::milliseconds(1500));
            thread t80(enqueue4,queue4,d,3);
            //enqueue4(queue4,d,3);
            std::this_thread::sleep_for(std::chrono::milliseconds(2000));
            //This is how we join the new thread with main



            //delq1(queue2,rear[1],1);
            //delq1(queue1, rear[0], 0);
            //thread t10(delq,queue1,rear[0],0);
            //thread t9(delq1,queue2,rear[1],1);
            //thread t11(delq2,queue3,rear[2],2);
            //thread t12(delq3,queue4,rear[3],3);



            t0.join();
            t20.join();
            t30.join();
            t40.join();
            t50.join();
            t60.join();
            t70.join();
            t80.join();
            //t9.join();
            //t10.join();
            //t11.join();
            //t12.join();

            if(kbhit())
            {
                cout<<"Yo";
                char ch = getch();
                cout<<ch;

                pc++;
                for(int i=0; i<=3; i++)
                {
                    wait[i]+=rear[i];
                    wait[i]++;
                    fs<<rear[i];
                    cout<<"1st to file";
                }

                if(ch=='d')
                {
                    cout<<"Hello";
                    cout<<endl;
                    for(i=0; i<=rear[0]; i++)
                        cout<<queue1[i];
                    cout<<endl;
                    for(i=0; i<=rear[1]; i++)
                        cout<<queue2[i];
                    cout<<endl;
                    for(i=0; i<=rear[2]; i++)
                        cout<<queue3[i];
                    cout<<endl;
                    for(i=0; i<=rear[3]; i++)
                        cout<<queue4[i];

                    cout<<"\n\nAverage Wait Time:";
                    for(int i=0; i<=3; i++)
                        cout<<endl<<endl<<wait[i]<<" "<<pc;
                }
                fs.close();
                break;

                 t.join();
                t2.join();
                t3.join();
                t4.join();
                t5.join();
                t6.join();
                t7.join();
                t8.join();
            }
        }

    }

    }while(inpu!=4);


    //t9.join();

	getchar();

}
