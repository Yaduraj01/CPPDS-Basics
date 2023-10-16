#include <iostream>
using namespace std;

//To take an input from the user of marks.
main()
{
    float marks[5];
    for(int i=0;i<5;i++)
    {
        cout << "please enter the number: ";
        cin >> marks[i];
    }
    cout << "marke are\n";
    for(int i=0;i<5;i++)
    {
        cout << marks[i];
        cout << "\n";
    }
}

//To find a key from user input
/*main()
{
    int marks[5] = {52,69,35,10,23};
    int key,i;
    cout << "enter a key: ";
    cin >> key;
    for(i=0; i<5;i++)
    {
        if(key==marks[i])
        {
            cout << "key found";
            break;
        }
    }
    if(i==10)
    {
        cout << "key does not exist";
    }
    return 0;;
}*/

//To find the location of the key found
/*main()
{
    int marks[5] = {23,33,32,30,23};
    int key,i,flag;
    flag = 0;
    cout << "Enter a key: ";
    cin >> key;
    for(i=0;i<5;i++)
    {
        if(key==marks[i])
        {
            cout << "key found at location" << i;
            flag = 0;
        }
    }
    if(flag==0)
    {
        cout << "Key does not exist";
    }
    return 0;
}*/

//To find the total sum and average of array of marks
/*main()
{
    int m[7] = {23,32,43,33,45,56,76};
    float sum,avg;
    sum = 0;
    avg = 0;

    for(int i = 0; i<7; i++)
    {
        sum =+ m[i];
    }
    cout << "sum is " << sum;
    avg = sum/7;
    cout << "avg is: " << avg;

}*/

//To find max number 
/*main()
{
    int a[5] = {5,6,3,7,8};
    int max;
    max = 0;
    for(int i=0; i<5; i++)
    {
        if(a[i]>a[i+1])
        {
            max = a[i];
        }
        else
        {
            max = a[i+1];
        }
    }
    cout << "max number is: " << max;
}*/



