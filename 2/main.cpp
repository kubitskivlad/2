//
//  main.cpp
//  2
//
//  Created by Kubitski Vlad on 08.09.15.
//  Copyright (c) 2015 Kubitski Vlad. All rights reserved.
//

#include <iostream>
#include <stdio.h>
using namespace std;


int main()
{
    int n,i,q;
    cout<<"vvedite chislo ";
    cin>>n;
    
   
    int m = n;
    for ( i=1; m>10; i++)
    {
        m = m / 10;
    }
    int a[i];
    //sdfasdfafsdfdas
    m = n;
    //sadfsfd
    for (int p=1; p<=i; p++)
    {
        a[p] = m % 10;
        m = m / 10;
    }
       for (int j=1; j<=i; j++)
        {
            for (int b=j+1; b<=i; b++)
            {
               if (a[j] == a[b])
               {
                   q++;
               }
            }
        }
    
    cout<<"   "<<i-q<<endl;
    
    
    
    
    
    
    
//    for (int p=1; p<=i; p++)
//    {
//        cout<<p<<" - "<<  a[p]<<endl;
//        
//    }
}
