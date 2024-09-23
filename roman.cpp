#include<iostream>
#include<string>
void roman(int year){//1988 -> mdcccclxxxviii
   //use 4 switch cases each for ones place with options - i, ii,iii, .....for 
   //corresponding numbers 1,2,3....
   // do the same thing for tenths place with 10 cases with options x,xx,xxx,xl...
   //for 10,20,40...
   //same for hundredths place options c,cc,ccc,cd,d,dc.... for numbers 100 to 900
   // same for thousandths place options m,mm,mmm,.......
   //V̅ = 5,000
   // X̅ = 10,000
   // L̅ = 50,000
   // C̅ = 100,000
   // M̅ = 1,000,000

std::string roman = "";
   
int year4 = year / 1000;//year4 = 1
year = year % 1000;//year= 988

   switch (year4)
   {
   case 1:
      roman.append("m");
      break;
   
   case 2:
      roman.append("mm");
      break;
   case 3:
      roman.append("mmm");
      break;   
   }

int year3 = year / 100;// year3 = 9
year = year % 100;//year = 88

   switch (year3)
   {
   case 1:
      roman.append("c");
      break;
   
   case 2:
      roman.append("cc");
      break;
   case 3:
      roman.append("ccc");
      break;
   case 4:
      roman.append("cd");
      break;

   case 5:
      roman.append("d");
      break;
   case 6:
      roman.append("dc");
      break;
   case 7:
      roman.append("dcc");
      break;

   case 8:
      roman.append("dccc");
      break;

   case 9:
      roman.append("cm");
      break;
   
   }

int year2 = year % 10;//year2 = 8
year = year / 10;//year = 8

   switch (year2)
   {
   case 1:
      roman.append("x");
      break;
   
   case 2:
      roman.append("xx");
      break;
   case 3:
      roman.append("xxx");
      break;
   case 4:
      roman.append("xl");
      break;

   case 5:
      roman.append("l");
      break;
   case 6:
      roman.append("lx");
      break;
   case 7:
      roman.append("lxx");
      break;

   case 8:
      roman.append("lxxx");
      break;

   case 9:
      roman.append("xc");
      break;
  
   }
int year1 = year % 10;// year1 = 8
   switch (year1)
   {
   case 1:
      roman.append("i");
      break;
   
   case 2:
      roman.append("ii");
      break;
   case 3:
      roman.append("iii");
      break;
   case 4:
      roman.append("iv");
      break;

   case 5:
      roman.append("v");
      break;
   case 6:
      roman.append("vi");
      break;
   case 7:
      roman.append("vii");
      break;

   case 8:
      roman.append("viii");
      break;

   case 9:
      roman.append("ix");
      break;
   
   }
   std::cout<<roman<<"\n";
}

void roman_alt(int year) { // Example: 1988 -> mdcccclxxxviii
   std::string roman = "";

   // Process thousands
   int year4 = year / 1000;  // Extract the thousands part
   year = year % 1000;       // Remove the thousands part from the year
   switch (year4) {
   case 1:
      roman += "m";
      break;
   case 2:
      roman += "mm";
      break;
   case 3:
      roman += "mmm";
      break;
   }

   // Process hundreds
   int year3 = year / 100;   // Extract the hundreds part
   year = year % 100;        // Remove the hundreds part from the year
   switch (year3) {
   case 1:
      roman += "c";
      break;
   case 2:
      roman += "cc";
      break;
   case 3:
      roman += "ccc";
      break;
   case 4:
      roman += "cd";
      break;
   case 5:
      roman += "d";
      break;
   case 6:
      roman += "dc";
      break;
   case 7:
      roman += "dcc";
      break;
   case 8:
      roman += "dccc";
      break;
   case 9:
      roman += "cm";
      break;
   }

   // Process tens
   int year2 = year / 10;    // Extract the tens part
   year = year % 10;         // Remove the tens part from the year
   switch (year2) {
   case 1:
      roman += "x";
      break;
   case 2:
      roman += "xx";
      break;
   case 3:
      roman += "xxx";
      break;
   case 4:
      roman += "xl";
      break;
   case 5:
      roman += "l";
      break;
   case 6:
      roman += "lx";
      break;
   case 7:
      roman += "lxx";
      break;
   case 8:
      roman += "lxxx";
      break;
   case 9:
      roman += "xc";
      break;
   }

   // Process ones
   int year1 = year;         // Extract the ones part (remaining)
   switch (year1) {
   case 1:
      roman += "i";
      break;
   case 2:
      roman += "ii";
      break;
   case 3:
      roman += "iii";
      break;
   case 4:
      roman += "iv";
      break;
   case 5:
      roman += "v";
      break;
   case 6:
      roman += "vi";
      break;
   case 7:
      roman += "vii";
      break;
   case 8:
      roman += "viii";
      break;
   case 9:
      roman += "ix";
      break;
   }

   std::cout << roman << "\n"; // Print the final result
}

int main(){

roman(1988);
roman_alt(1988);
   return 0;
}


