#include <iostream>

//Tenkorang Daniel
//10659057

using namespace std;

int My_LinearSearch(int my_array[],int Key, int Array_size)
{
    int my_size= Array_size- 1;

    if(my_size<0)
    {

        return -1;
    }
    else
    {

        if(my_array[my_size]==Key)
        {
            return 1;
        }
        else
        {

            return My_LinearSearch(my_array,Key,my_size);
        }
    }

}



void My_MaxMin(int my_array[], int lowest, int highest, int *maximum, int *minimum)
{

    int middle,first_max,last_max,first_min,last_min;

    if(highest-lowest==1)
    {

        if(my_array[lowest]<my_array[highest])
        {

            *maximum=my_array[lowest];
            *minimum=my_array[highest];
        }

        else{

            *maximum=my_array[highest];
            *minimum=my_array[lowest];
        }
    }

    else if(lowest==highest)
    {
        *minimum=*maximum=my_array[lowest];
    }

    else if(lowest<highest)
    {
        middle=(lowest+highest)/2;

        My_MaxMin(my_array,lowest,middle,&first_max,&first_min);
        My_MaxMin(my_array,middle+1,highest,&last_max,&last_min);

        if(first_max>last_max)
        {

            *maximum=first_max;
        }

        else{
            *maximum=last_max;
        }

        if(first_min<last_min)
        {
            *minimum=first_min;
        }
        else

        {
            *minimum=last_min;
        }

    }
}


int main()
{
    //Linear Search

    int Array[5],my_num,key,Position=0;

    cout << endl << "Linear Search " << endl;
    cout << endl << "********************************************************************************" << endl;


    cout << endl << "Enter the size of the Array: "<<endl;
    cin >> my_num;
    cout << endl << "Enter Elements into the array: "<< endl;
    for(int i=0;i<my_num;i++)
    {
        cin>> Array[i];
    }
    cout << "Elements entered into the Array"<< endl;

    Position = My_LinearSearch(Array,key,my_num);

    cout << endl << Position << endl;



    //Find the Maximum and Minimum Numbers


    cout << endl << "Find Max and Min" << endl;
    cout << endl << "********************************************************************************" << endl;


    int My_array[10];
    int Min_num=0;
    int Max_num=0;
    int My_num;//size of array

    cout << "Enter the Size of the Array: "<< endl;
    cin >>My_num;

    cout << "Enter Elements into the array: "<< endl;
    for(int i=0; i<My_num;i++)
    {

        cin >> My_array[i];
    }
    My_MaxMin(My_array,0, My_num-1,&Max_num,&Min_num);





    return 0;
}
