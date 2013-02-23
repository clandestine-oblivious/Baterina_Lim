#include "Project.h"
#include <iostream>
#include <sstream>
#include <string>
#include <algorithm>
#include <cmath>
#include <math.h>
#include <vector>
#define MAX	200000
#define LIMIT	1000
#include <stdio.h>
#include <fstream>
#define N 100

using namespace std;

Project::Project()
{
    //ctor
}

Project::~Project()
{
    //dtor
}
// PROBLEM 1
void Project::multiples_of_3_and_5(){

    cout << "Kindly wait our system is still computing..." << endl << endl;

    int i;
    int sum=0;

    for(i=0; i<1000; i++)
    {
              if ((i%3)==0 || (i%5)==0){
              sum=sum+i;}
    }
    cout << "*The Sum of the Multiples of 3 and 5 is: " << sum << "*" << endl <<endl;
}

// PROBLEM 3
void Project::Largest_prime_factor_of_600851475143()
{
    cout << "Kindly wait our system is still computing..." << endl << endl;

    long long x=600851475143;

        for(int i=2;i<=sqrt(x);i++)
        {
            while(x%i==0 && x!= i)
            {
                x=x/i;
            }
        }
        cout << "The Largest Prime Factor is: " << x << endl << endl;
}


// PROBLEM 6
void Project::sum_squares_diff()
{
    cout << "Kindly wait our system is still computing..." << endl << endl;

    int sumofsquares;
    int squaredsum;
    int difference;

    sumofsquares = (100 * 101 * 201) / 6;
    squaredsum = (100 * 101 )/ 2;
    squaredsum = squaredsum * squaredsum;

        if (sumofsquares - squaredsum > 0) {
            difference = sumofsquares - squaredsum;
            //cout << "sumofsquares is larger. (" << sumofsquares << ")" << endl;
            }
        else {
            difference = squaredsum - sumofsquares;
            //cout << "squaredsum is larger. (" << squaredsum << ")" << endl;
            }

    cout << "*The Difference between the Sum of the Squares of the First One Hundred " << endl;
    cout << "Natural Numbers and the Square of their Sum is " << difference << "*" << endl << endl;
}

//PROBLEM 7

void Project::prime_10001st()
{
 cout << "Kindly wait our system is still computing..." << endl << endl;

 int ctr = 0;

    for (int i=2; ; i++)
        {
            bool prime=true;
            for (int j=2; j*j<=i; j++)
                { if (i % j == 0)
                    {
                        prime=false;
                        break;
                    }
                }
    if(prime)
        {
            ctr++;
        if (ctr==10001)
            {
            cout << "*The 10,001st Prime Number is: " << i << "*"<< endl << endl;
            break;
            }
        }
        }
}


// PROBLEM 2
void Project::Even_fibonacci()
{
    cout << "Kindly wait our system is still computing..." << endl << endl;

    int total = 0;
	int one = 1;
	int two = 2;
	int three = 0;
	while (two <= 4000000)
	{
		three = one + two;
		if (two % 2 == 0)
			total += two;
		one = two;
		two = three;
	}
	cout << "*The Sum of the Even-Valued Terms is: " << total << "*" << endl << endl;
}


// PROBLEM 4
void Project::Largest_Palindrome_Product()
{
    cout << "Kindly wait our system is still computing..." << endl << endl;

    long largestProduct = 0;
    string reverseproduct;

    for(long i=999; i>=100; --i)
    {
        for(long j=999; j>=100; --j)
        {
            long temp = i * j;
            if(temp > largestProduct)
            {
                stringstream strmProduct;
                strmProduct << i * j;
                reverseproduct = strmProduct.str();
                reverse(reverseproduct.begin(), reverseproduct.end());
                if(strmProduct.str() == reverseproduct)
                    largestProduct = temp;
            }
        }
    }
    cout << "*The Largest Palindrome from the product of two 3-digit numbers is: " << largestProduct << "*" << endl <<endl;
}


// PROBLEM 5
void Project::Smallest_multiple()
{
     cout << "Kindly wait our system is still computing..." << endl;
     cout << "Trying its very best.... :)" << endl << endl;

     int posnumber = 20;
     int flag = 0;

    while(flag == 0) {
        if ((posnumber%2) == 0 && (posnumber%3) == 0 && (posnumber%4) == 0    && (posnumber%5) == 0 && (posnumber%6) == 0
            && (posnumber%7) == 0 && (posnumber%8) == 0 && (posnumber%9) == 0 && (posnumber%10) == 0 && (posnumber%11) == 0 && (posnumber%12) ==0
            && (posnumber%13) == 0 && (posnumber%14) == 0 && (posnumber%15) == 0 && (posnumber%16) == 0 && (posnumber%17) == 0 && (posnumber%18)==0
            && (posnumber%19) == 0    && (posnumber%20) == 0)

        {
                flag =  1;
                cout << "*The Smallest Positive Number that is Evenly Divisible by All" << endl;
                cout << " of the Numbers from 1 to 20 is: " << posnumber << "*" << endl << endl;
        }
        posnumber++;
}
}


//PROBLEM 9
void Project::special_phyto_triplet()
{
    cout << "Kindly wait our system is still computing..." << endl << endl;

 int a = 0;
 int b = 0;
 int c = 0;
 int sumoftriples = 1000;
 int product;
 bool check = false;

	for (a = 1; a < sumoftriples / 3 && !check; a++)

        { for (b = a; b < sumoftriples / 2 && !check; b++)

            { c = sumoftriples - a - b;

        if ((a*a) + (b*b) == (c*c) )
            { check = true;
            product=a*b*c;
            cout << "A Pythagorean triplet is a set of three natural numbers, a  b  c " << endl;
            cout << "for which, " << endl;
            cout << "a2 + b2 = c2 " << endl << endl;
            cout << "There exists exactly one Pythagorean triplet for which a + b + c = 1000." <<endl;
            cout << "* That is: " << product << "*" << endl << endl;
            break;
            }
            }
        }
}


//PROBLEM 8
void Project::largest_product_in_series()

{
 cout << "Kindly wait our system is still computing..." << endl << endl;

string number= "73167176531330624919225119674426574742355349194934"
"96983520312774506326239578318016984801869478851843"
"85861560789112949495459501737958331952853208805511"
"12540698747158523863050715693290963295227443043557"
"66896648950445244523161731856403098711121722383113"
"62229893423380308135336276614282806444486645238749"
"30358907296290491560440772390713810515859307960866"
"70172427121883998797908792274921901699720888093776"
"65727333001053367881220235421809751254540594752243"
"52584907711670556013604839586446706324415722155397"
"53697817977846174064955149290862569321978468622482"
"83972241375657056057490261407972968652414535100474"
"82166370484403199890008895243450658541227588666881"
"16427171479924442928230863465674813919123162824586"
"17866458359124566529476545682848912883142607690042"
"24219022671055626321111109370544217506941658960408"
"07198403850962455444362981230987879927244284909188"
"84580156166097919133875499200524063689912560717606"
"05886116467109405077541002256983155200055935729725"
"71636269561882670428252483600823257530420752963450";
    long p=1;
    long five_d;
    long max=0;
    long i;
    const char* a=number.c_str();

    for (p=0; p<995; p++)
{
      five_d=1;
      for (i=p; i<p+5; i++)
      {
            five_d*=(int(a[i])-48);
            }
       if (five_d>max) max=five_d;
       }

  cout << "The Largest Product in Series is: " << max << endl;
}


//PROBLEM 10
void Project::Summation_of_primes()
{
    cout << "Kindly wait our system is still computing..." << endl;
    cout << "Trying its very best.... :)" << endl << endl;

    int num=1;
	unsigned long long int total=2;
	int divisor;
	bool prime = true ;

        while (num < 2000000)
            { prime=true;
            if (num<=1)
                prime=false;
            else if(num==2||num==3)
                prime=true;
            else if (num%2==0)
                prime = false ;
            else
            {

            for(divisor=3; divisor <1415;divisor=divisor+2)
            {
                if (num==divisor)
				prime=true;
                else if (num%divisor==0){
                prime=false;
                break;
                }
            }

            }
if (prime==true){
	total=total+num;
}
		num=num+2;
	}
	cout << "*The Sum of all the Primes Below Two Million[2M] is: " << total << "*" << endl << endl;
}

//Problem 19
void Project::Counting_sundays()
{
 bool isLeapYear(int year);

{
  long days = 0;
  int count = 0;

  for (int year = 1901; year <= 2000; ++year) {
    for (int month = 1; month <= 12; ++month) {
      if (days % 7 == 5) ++count;

      switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
          days += 31;
          break;

        case 4: case 6: case 9: case 11:
          days += 30;
          break;

        case 2:
          days += (isLeapYear(year) ? 29 : 28);
          break;

        default:
          std::cout << "Inconceivable!" << std::endl;
          break;
      }
    }
  }

  std::cout << count << std::endl;


}

}
bool isLeapYear(int year)
{
  return (year % 4 == 0) && !(year % 100 == 0) || (year % 400 == 0);
}


//Problem 11

void Project::Largest_product_grid()
{
    {
     int a[26][26] = {
00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,
00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,
00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,
00,00,00,8,02,22,97,38,15,00,40,00,75,04,05,07,78,52,12,50,77,91,8,00,00,00,
00,00,00,49,49,99,40,17,81,18,57,60,87,17,40,98,43,69,48,04,56,62,00,00,00,00,
00,00,00,81,49,31,73,55,79,14,29,93,71,40,67,53,88,30,03,49,13,36,65,00,00,00,
00,00,00,52,70,95,23,04,60,11,42,69,24,68,56,01,32,56,71,37,02,36,91,00,00,00,
00,00,00,2,31,16,71,51,67,63,89,41,92,36,54,22,40,40,28,66,33,13,80,00,00,00,
00,00,00,24,47,32,60,99,03,45,02,44,75,33,53,78,36,84,20,35,17,12,50,00,00,00,
00,00,00,32,98,81,28,64,23,67,10,26,38,40,67,59,54,70,66,18,38,64,70,00,00,00,
00,00,00,67,26,20,68,02,62,12,20,95,63,94,39,63,8,40,91,66,49,94,21,00,00,00,
00,00,00,24,55,58,05,66,73,99,26,97,17,78,78,96,83,14,88,34,89,63,72,00,00,00,
00,00,00,21,36,23,9,75,00,76,44,20,45,35,14,00,61,33,97,34,31,33,95,00,00,00,
00,00,00,78,17,53,28,22,75,31,67,15,94,03,80,04,62,16,14,9,53,56,92,00,00,00,
00,00,00,16,39,05,42,96,35,31,47,55,58,88,24,00,17,54,24,36,29,85,57,00,00,00,
00,00,00,86,56,00,48,35,71,89,07,05,44,44,37,44,60,21,58,51,54,17,58,00,00,00,
00,00,00,19,80,81,68,05,94,47,69,28,73,92,13,86,52,17,77,04,89,55,40,00,00,00,
00,00,00,04,52,8,83,97,35,99,16,07,97,57,32,16,26,26,79,33,27,98,66,00,00,00,
00,00,00,88,36,68,87,57,62,20,72,03,46,33,67,46,55,12,32,63,93,53,69,00,00,00,
00,00,00,04,42,16,73,38,25,39,11,24,94,72,18,8,46,29,32,40,62,76,36,00,00,00,
00,00,00,20,69,36,41,72,30,23,88,34,62,99,69,82,67,59,85,74,04,36,16,00,00,00,
00,00,00,20,73,35,29,78,31,90,01,74,31,49,71,48,86,81,16,23,57,05,54,00,00,00,
00,00,00,01,70,54,71,83,51,54,69,16,92,33,48,61,43,52,01,89,19,67,48,00,00,00,
00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,
00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,
00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00
};

    int m = 1;
        for(int i=3;i<23; ++i) {
                for(int j=3;j<23;++j) {
                        m = max(
                                m,
                            max(
                                a[i][j] * a[i+1][j-1] * a[i+2][j-2] * a[i+3][j-3],
                            max(
                                a[i][j] * a[i][j+1] * a[i][j+2] * a[i][j+3],
                            max(
                                a[i][j] * a[i+1][j+1] * a[i+2][j+2] * a[i+3][j+3],
                                a[i][j] * a[i+1][j] * a[i+2][j] * a[i+3][j]))));
                }
        }
        cout << "Largest Product Grid: " << m << endl;
}
}

//Problem 17

void Project::Number_letter_counts()
{
{
    string dictionary1[10] = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
    string dictionary2[18] = { "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety" };
    string dictionary3[10] = { "onehundred", "twohundred", "threehundred", "fourhundred", "fivehundred", "sixhundred", "sevenhundred", "eighthundred", "ninehundred", "onethousand" };

    int sum_of_all_letters=0;
    int i=1,start,j,k;
    while(i<10){
        sum_of_all_letters+=dictionary1[i].length();
        i++;
        }
    i=0;
    while(i<10){
        sum_of_all_letters+=dictionary2[i].length();
        i++;
    }
    start=10;
    while(start<18){
        sum_of_all_letters+=dictionary2[start].length();
        for(i=1; i<10; i++)
        sum_of_all_letters+=dictionary2[start].length()+dictionary1[i].length();
        start++;
    }
    j=0;
    start=10;
    while(j<9){
        sum_of_all_letters+=dictionary3[j].length();
        for(i=1; i<10; i++)
            sum_of_all_letters+=dictionary3[j].length()+dictionary1[i].length()+3;
        for(k=0; k<10; k++)
            sum_of_all_letters+=dictionary3[j].length()+dictionary2[k].length()+3;
        for(int p=10; p<18; p++)
            sum_of_all_letters+=dictionary3[j].length()+dictionary2[p].length()+3;
        while(start<18){
            for(int a=1; a<10; a++)
                sum_of_all_letters+=dictionary3[j].length()+dictionary2[start].length()+dictionary1[a].length()+3;
            start++;
        }
        start=10;
        j++;
    }
    sum_of_all_letters+=dictionary3[9].length();
    cout<<sum_of_all_letters<<endl;
}
}

//Problem 13

void Project::Largest_sum(){

    cout << "Computing..." << endl;
{

  int numbers[100][50];
    string line;
    int sum=0;
    int carry=0,remainder=0;
    vector<int>largenumber;

    ifstream myfile;
    myfile.open("numbers.txt");
    int j=0;
    while(myfile.good())
    {
        getline(myfile,line);
        for(int i=0;i<50;i++)
            numbers[j][i]=charToInt(line[i]);
        j++;
    }
    myfile.close();

    int a=49;
    while(a>=0){
    sum=0;
    for(int b=0; b<100; b++){
        sum =sum + numbers[b][a];}
        sum=sum+carry;
        carry=sum/10;
        remainder=sum-carry*10;
        largenumber.insert(largenumber.begin(),remainder);
        a--;
        }
    largenumber.insert(largenumber.begin(),carry);

    for(int i=0;i<9;i++)
        cout<<largenumber[i];
    cout<<"\n";

}
}
int Project::charToInt(char line){
    if(line == '0')
        return 0;
    if (line == '1')
        return 1;
    if (line == '2')
        return 2;
    if (line == '3')
        return 3;
    if (line == '4')
        return 4;
    if (line == '5')
        return 5;
    if (line == '6')
        return 6;
    if (line == '7')
        return 7;
    if (line == '8')
        return 8;
    if (line == '9')
        return 9;

    return 0;
}

//Problem 14
void Project::Longest_collatz_sequence()
{

    cout << "Computing..." << endl;

	__int64 longest = 0, longcount = 0;
	for(__int64 x=2;x<1000000;x++)
	{
		__int64 Count = 0, number = x;
		do
		{
			if((number%2) == 0)
				number/=2;
			else
				number = 3 * number + 1;
			Count++;
		}
		while(number != 1);
		if(Count > longcount)
		{
			longcount = Count;
			longest = x;
		}
	}

	cout << "Under One Million, the Number that produces the Longest Chain is: " << longest << endl;
	cout << "This generates " << longcount << "changes in the sequence." << endl << endl;
}

//Problem 20

void Project::Factorial_digit_sum(){

    cout << "Computing..." << endl;


  int num[1000] = {0};

  int size = 1, sum = 0;
  int i, j;

  num[0] = 1;
   for (i = 2; i <= N; i++) {
    for (j = 0; j < size; j++)
      num[j] *= i;
    for (j = 0; j < size; j++) {
      if (num[j] > 9) {
    num[j+1] += num[j] / 10;
    num[j] %= 10;
    if (j == size-1)
      size++;
      }
    }
  }
  for (i = 0; i < size; i++)
    sum += num[i];
  cout << "Sum of the Digits: " << sum << endl;

}

//Problem 18
void Project::max_path_sum()
{
    int tri [15][15] = {
                       {75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                       {95, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                       {17, 47, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                       {18, 35, 87, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                       {20, 4, 82, 47, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                       {19, 1, 23, 75, 3, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                       {88, 2, 77, 73, 7, 63, 67, 0, 0, 0, 0, 0, 0, 0, 0},
                       {99, 65, 4, 28, 6, 16, 70, 92, 0, 0, 0, 0, 0, 0, 0},
                       {41, 41, 26, 56, 83, 40, 80, 70, 33, 0, 0, 0, 0, 0, 0},
                       {41, 48, 72, 33, 47, 32, 37, 16, 94, 29, 0, 0, 0, 0, 0},
                       {53, 71, 44, 65, 25, 43, 91, 52, 97, 51, 14, 0, 0, 0, 0},
                       {70, 11, 33, 28, 77, 73, 17, 78, 39, 68, 17, 57, 0, 0, 0},
                       {91, 71, 52, 38, 17, 14, 91, 43, 58, 50, 27, 29, 48, 0, 0},
                       {63, 66, 4, 68, 89, 53, 67, 30, 73, 16, 69, 87, 40, 31, 0},
                       {4, 62, 98, 27, 23, 9, 70, 98, 73, 93, 38, 53, 60, 4, 23}
                       };

        cout << "Maximum Total: "<<path(15, tri) << endl;
}

    int Project::maxsum (int num1, int num2, int up)

    {
    int biggest = num1;
    if(num2 > biggest)
        biggest = num2;
    return biggest + up;
    }
    int Project::path(int num, int tri[][15])

    {
        for(int i = num-1; i >= 0; i--)

        {
            for(int j = 0; j+1 < num && tri[i][j+1] != 0; j++)
            tri[i-1][j] = maxsum(tri[i][j], tri[i][j+1], tri[i-1][j]);
        }

        return tri[0][0];
}


//Problem 12
long divisor(long n)
{
        long long sum=2;
    long long divisor=2;
    double square=sqrt(n);
    while(divisor<square)
    {
        if(n%divisor==0)sum+=2;
        divisor++;
    }
    if((long long)(square)==square)sum++;
    return sum;
    }
void Project::Divisible_Triangular_Number()
{
    long long n1,n2;
    int i=0;
    do
    {
        i++;
        if(i%2==0)
        {
            n1=(i+1);
            n2=i/2;
        }
        else
        {
            n1=(i+1)/2;
            n2=i;
        }
    }
    while(divisor(n1)*divisor(n2)<500);
    cout << "The Value of the First Triangle Number to have over "<< endl;
    cout << "Five Hundred Divisors is: "<< (n1*n2) << endl << endl;
}

//Problem 16
int  x[302];
void Project::Power_Digit_Sum()
{
    x[301]=2;
	for (short power=1;power!=1000;power++)
	{
		for (short arraynum=301;arraynum!=0;arraynum--) {
			x[arraynum]=x[arraynum] * 2;
        }

		for (short arraynum=301;arraynum!=0;arraynum--) {
			if (x[arraynum]>9) {
                        x[arraynum]=x[arraynum]-10;
                        x[arraynum-1]=x[arraynum-1]+1;
			    }
		}
	}

	int sum=0;

		for (short arraynum=301;arraynum!=-1;arraynum--)
		{sum = sum +x[arraynum];}
		cout<<sum;

	cin.get();
}
/*
//Problem 15

void Project::Diophantine_reciprocals_a(){

    //cout << "Computing..." << endl;
    seive(MAX);
	for (int N = 1000; N < MAX; N++)
	{
		if (!composite[N])
			continue;
		int numdiv = 1, cn = N;
		for (unsigned i = 0; 1 != cn && i < primes.size(); i++)
		{
			int	count = 0;
			while (cn % primes[i] == 0)
			{
				cn /= primes[i];
				count++;
			}
			numdiv *= (count * 2 + 1);
		}
		int ans = (numdiv + 1) / 2;
		if (ans > LIMIT)
		{
			cout << N << endl;
			break;
		}
	}
}
void Project::seive(int n)
{
	int	i, j;

	for (i = 2; i * i <= n; i++)
	{
		if (composite[i])
			continue;
		for (j = 2 * i; j <= n; j += i)
			composite[j] = 1;
		primes.push_back(i);
	}
	for (; i <= n; i++)
		if (!composite[i])
			primes.push_back(i);
}

//odd-baterina even-lim
*/
// YAAAAY //
