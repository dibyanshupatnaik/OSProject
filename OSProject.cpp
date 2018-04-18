
/*
#include <iostream>
#include <thread>
static const int num_of_threads = 10;
//This is the function that will run in parallel
// It will be passed to the thread
void thread_method(int thread_id) {
	std::cout << "Function running in thread " << thread_id << std::endl;
}
int main() {
	std::thread threads[num_of_threads];
	//This statement will launch multiple threads in loop
	for (int i = 0; i < num_of_threads; ++i) {
		threads[i] = std::thread(thread_method, i);
	}
	std::cout << "The main function execution\n";
	//This is how we join the new thread with main
	for (int i = 0; i < num_of_threads; ++i) {
		threads[i].join();
	}
	getchar();
	return 0;
}

#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

void *worker_thread(void *arg)
{
        printf("This is worker_thread()\n");
        pthread_exit(NULL);
}

int main()
{
        pthread_t my_thread;
        int ret;

        printf("In main: creating thread\n");
        ret =  pthread_create(&my;_thread, NULL, &worker;_thread, NULL);
        if(ret != 0) {
                printf("Error: pthread_create() failed\n");
                exit(EXIT_FAILURE);
        }

        pthread_exit(NULL);
}

#include <string>
#include <iostream>
#include <thread>

using namespace std;
-std=c++11

// The function we want to execute on the new thread.
void task1(string msg)
{
    cout << "task1 says: " << msg;
}

int main()
{
    // Constructs the new thread and runs it. Does not block execution.
    thread t1(task1, "Hello");

    // Makes the main thread wait for the new thread to finish execution, therefore blocks its own execution.
    t1.join();
}


#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<pthread.h>
#include<dos.h>
#include<unistd.h>
#include<windows.h>
using namespace std;

void *wait(void *tm)
{
	int i;
	long tm_id;
	tm_id=(long)tm;
	Sleep(1);
	cout<<"Sleeping in the thread\n";
	cout<<"Thread having id: "<<tm_id<<"  ...exiting from this\n";
	pthread_exit(NULL);
}
int main()
{
	system("cls");
	int rc, i;
	pthread_t threads[5];
	pthread_attr_t attr;
	void *status;
	pthread_attr_init(&attr);
	pthread_attr_setdetachstate(&attr, PTHREAD_CREATE_JOINABLE);
	for(i=0;i<5; i++)
	{
		cout<<"main(): creating the thread, "<<i<<"\n";
		rc=pthread_create(&threads[i], NULL, wait, (void *)i);
		if(rc)
		{
			cout<<"Error: unable to create thread, "<<rc<<"\n";
			exit(-1);
		}
	}
	pthread_attr_destroy(&attr);
	for(i=0; i<5; i++)
	{
		rc=pthread_join(threads[i], &status);
		if(rc)
		{
			cout<<"Error: unable to join, "<<rc<<"\n";
			exit(-1);
		}
		cout<<"Main: completed thread id: "<<i;
		cout<<"  exiting with status: "<<status<<"\n";
	}
	cout<<"Main: program exiting.\n";
	pthread_exit(NULL);
	getch();
}


#include <iostream>
#include <thread>
using namespace std;
void threadFunc()
{
	cout << "Welcome to Multithreading" << endl;

}
int main()
{
	//pass a function to thread
	thread funcTest1(threadFunc);
}
*/
#include <iostream>
#include <thread>
#include<windows.h>
using namespace std;
int a,b,c,d;
//This is the function that will run in parallel
// It will be passed to the thread
void thread_method() {
    std::this_thread::sleep_for(std::chrono::milliseconds(500));
	cout << "Function running in thread 1";
    a=GetTickCount()%10;
    cout<<a;
	//std::this_thread::sleep_for(std::chrono::milliseconds(500));
}
void thread_method2() {
    std::this_thread::sleep_for(std::chrono::milliseconds(250));
	cout << "Function running in thread 2";
	b=GetTickCount()%10;
	cout<<b;
}
void thread_method3() {
    std::this_thread::sleep_for(std::chrono::milliseconds(700));
	cout << "Function running in thread 3";
    c=GetTickCount()%10;
    cout<<c;
}
int main() {
	//This statement will launch thread in parallel to main function
	thread t(thread_method);
	thread t2(thread_method2);
	thread t3(thread_method3);

	//std::this_thread::sleep_for(std::chrono::milliseconds(200));
	cout << "The main function execution\n";
	cout<<GetTickCount()%10;
	//This is how we join the new thread with main
	//t.join();
	getchar();
	return 0;
}
