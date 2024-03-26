#include<iostream>
#include<string>
#include<iomanip>
#include<vector>
#include<functional>
#include<algorithm>

using namespace std;



//////////////////////////////////////////////////// EXAMPLES BASIC OF C++ ///////////////////////////////////////////////////////////////

//int main() {

	///////////////////////////////////////////// Converting char to int ////////////////////////////////////////////////////////////////

		/*char i1, i2, i3, i4, i5;
		cout << "please enter 5 lettters to be coverted to a number " << std::endl;
		cin >> i1 >> i2 >> i3 >> i4 >> i5;
		cout << int('i1')<<" " << int('i2') << " " << int('i3') << " " << int('i4') << " " <<int('i5') << " " << std::endl;*/

//---------------------------------------------------------------------------------------------------------------------------------------

		///////// Entering code to define between odd and even using a % to show if its divisible by 2 using a if else statement //////

		/*int number;
		cout << "please enter whole number"<<std::endl;
		cin >> number;
		if (number %2 == 0)
		{
			cout << "your number is even";
		}
		else
		{
			cout<<"your number is odd";
		}*/

//---------------------------------------------------------------------------------------------------------------------------------------
	
///////////////////////////////////////////////////////Working with an if else statements////////////////////////////////////////////////

		/*float a, b, c;
		cout << "please enter all three sides of a triangle "<<std::endl;
		cin >> a >> b >> c;
		if (a == b && b == c)
		{
			cout << "this is a Equilaterial traiangle ";
		}
		else if (a != b && a != c && b != c)
		{

			cout << " this is a Scalene Triangle";

		}
		else
		{
			cout << "this is a Isosceles Triangle";
		}*/

//--------------------------------------------------------------------------------------------------------------------------------------

///////////////////////////////////////////////////////////////Operators////////////////////////////////////////////////////////////////
	 
		/* +addition, -subtraction, * multiplication, / division, % remainder or used for divisible by, == equal too

		 increment ++, decrement --

		example
		int counter = 7;
		counter++;
		cout<<counter<< endl;

		 <, >, <=, >=,!=
	 
		 0= false
		 1= true
	 
		 || or
		 && and 
		 ! not
	 
		 =, +=, -=, *=, /=, %=
		 */
// --------------------------------------------------------------------------------------------------------------------------------------

///////////////////////////////////////////Pass by referance, Swapping two variables /////////////////////////////////////////////////////

		/*int a = 10;
		int b = 20;

		int temp = a;
		a = b;
		b = temp;

		cout << " a is = to " << a << " b is = to " << b << std::endl;*/

//---------------------------------------------------------------------------------------------------------------------------------------

////////// Program that defines if the second user can uess what the first users input was correctly using and if else statement ////////

		/*int Guest1Number;
		int Guest2Number;
		std::cout << "Please enter a number: ";
		std::cin >> Guest1Number;
		system("cls");
		std::cout << "Please enter a number: ";
		std::cin >> Guest2Number;

		if (Guest1Number == Guest2Number)
		{
			std::cout << "Your guess was correct!" << std::endl;
		}
		else
		{
			std::cout << "Your guess was incorrect please try again" << std::endl;
		}*/

		// Second solution:

			//(Guest1Number == Guest2Number) ? cout << "Your guess was correct!" : cout << "Your guess was incorrect please try again";

//---------------------------------------------------------------------------------------------------------------------------------------

/////////////////////////////////////////////////////////////Switch Statements///////////////////////////////////////////////////////////

		/*float num1, num2;
		char Operator;

		cout << "Please enter your equation you would like the Super Computer to execute" << endl;
		cin >> num1 >> Operator >> num2;
		cout << "Your Equation has been proceesed by the Super Computer, your results for the equation are:  ";

		switch (Operator)
		{
		case '-': cout << num1 << Operator << num2 << " = " << num1 - num2 << endl; break;
		case '+': cout << num1 << Operator << num2 << " = " << num1 + num2 << endl; break;
		case '*': cout << num1 << Operator << num2 << " = " << num1 * num2 << endl; break;
		case '/': cout << num1 << Operator << num2 << " = " << num1 / num2 << endl; break;
		case '%':
			bool isNum1Int, isNum2Int;
			isNum1Int=((int)num1 == num1);
			isNum2Int = ((int)num2 == num2);

			if (isNum1Int && isNum2Int)
			{
				cout << num1 << Operator << num2 << "=" << (int)num1 % (int)num2;
			}
			else
			{
				cout << "Not a Valid Input";
			}
			break;

		default: cout << "Not a valid Operation" <<endl;

		}*/
		// Example2:

		 /*int year, month;

		 cout << "Please enter a year and a month to configure how many days are associated with that month ";
		 cin >> year >> month;

		 switch (month)
		 {
		 case 2: (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) ?
			 cout << "There's 29 days " : cout << "There's 28 days"; break;
		 case 4:
		 case 6:
		 case 8:
		 case 11: cout << "There's 30 days"; break;
		 case 1:
		 case 3:
		 case 5:
		 case 7:
		 case 9:
		 case 10:
		 case 12: cout << "There's 31 days"; break;
		 default: cout << "Please enter a valid number";
		 }
		*/


//---------------------------------------------------------------------------------------------------------------------------------------

//////////////////////////////////////////////////////////////////While loops////////////////////////////////////////////////////////////

		/*int counter = 100;
		while (counter <= 500)
		{
			if (counter % 3 == 0 && counter % 5 == 0)
				cout << counter << " is divisible by 3 and 5\n";
			counter++;
		
		}
		
		/// Example 2

		int number, reversedNumber = 0;

		cout << "Enter a number to be reversed: ";
		cin >> number;

		while (number != 0) 
		{
			reversedNumber *= 10;
			reversedNumber += number % 10;
			number /= 10;
		}
		cout << "Reversed: " << reversedNumber;
	*/

		
//----------------------------------------------------------------------------------------------------------------------------------

///////////////////////////////////////////////////////////Do While loop////////////////////////////////////////////////////////////// 
 ///////////////////////////////////////////////Entering a password with 3 attempts////////////////////////////////////////////////////

	/*int  UsersPin = 1234, pin, errorCounter = 0;

	do
	{
		cout << "Please enter your password: ";
		cin >> pin;
		if (pin != UsersPin)
		errorCounter++;
	} while (errorCounter < 3 && pin != UsersPin);
	
	if (errorCounter < 3)
		cout << "Loading..";
	else
		cout << "Blocked..";

*/
//--------------------------------------------------------------------------------------------------------------------------------

//////////////////////////////////////////////////////////For loops/////////////////////////////////////////////////////////////////////

	/*	while (true) {
				for (int i = 0; i < 10000; i= 1+10) {
					if (i % 10 == 0) {
						std::cout << '.' << std::endl;
					}
					else {
						std::cout << "this isnt working" << std::endl;
					}
					return i;
				}
			}
		}*/

	// Example 2
	/*
			for (int i = 0; i < 100; i++) {
				if (i %10==0) {
					std::cout << i << std::endl; 
				}
				else { std::cout << "doesnt work"<<std::endl; }
	
				return i;
			}
		}
	*/
//---------------------------------------------------------------------------------------------------------------------------------

///////////////////////////////////////////////////////// Nested loops//////////////////////////////////////////////////////////////

	/*for (int i = 1; i <= 10; i++) {
		for (int j = 1; j <= 10; j++) {
			cout << i << "*" << j << "=" << i * j << endl;
		}
		cout << endl;
	}*/



/*	Example 2
	int height;
	int width;
	char symbol;

	cout << "Please enter a height: ";
	cin >> height;
	cout << "Please enter a width: ";
	cin >> width;
	cout << "Please enter a symbol: ";
	cin >> symbol;

	for (int h = 0; h < height; h++) {
		for (int w = 0; w < width; w++) {
			cout << setw(3)<< symbol;
		}
		cout << endl;
	}
	*/
	/* Example 3


	int length;
	char symbol;

	cout << "Please enter a length: ";
	cin >> length;
	cout << "Please enter a symbol: ";
	cin >> symbol;

	for (int i = 1; i <= length; i++) {
		for (int j = 1; j <= i; j++) {
			cout << setw(2) << symbol;
		}
		cout << endl;
	}
*/

	/*Example 4

	int length;
	char symbol;

	cout << "Please enter a length: ";
	cin >> length;
	cout << "Please enter a symbol: ";
	cin >> symbol;

	for (int l = length; l >= 1; l--) {
		for (int j = 1; j <= l; j++) {
			cout << setw(2) << symbol;
		}
		cout << endl;
	}
*/


//---------------------------------------------------------------------------------------------------------------------------------

/////////////////////////////////////////////////////////// Functions///////////////////////////////////////////////////////////////

	/*int number;

	cout << " please enter a number: ";
	cin >> number;

	bool isPrimeNumber = true;
	for (int i = 2; i < number; i++) 
	{
		if (number % i == 0) 
		{
			isPrimeNumber = false;
			break;
		}
	
	}
	*/

	/*Example 2

	if (isPrimeNumber)
	{
		cout << "This is a Prime Number";
	}
	else
	cout << "This is not a Prime Number";

	*/


//---------------------------------------------------------------------------------------------------------------------------------

///////////////////////////////////////////////////////Returning Functions ////////////////////////////////////////////////////////


	/*bool isPrimeNumber(int number) {
		for (int i = 2; i < number; i++) {
			if (number % i == 0)
				return false;
		}
		return true;
	}

	void main()
	{
		for (int i = 1; i <= 1000; i++) {
			bool isPrime = isPrimeNumber(i);
			if (isPrime)
				cout << i << "is prime number\n";
		}

		system("pause>0");

	}
	*/
//--------------------------------------------------------------------------------------------------------------------------------

/////////////////////////////////////////////////////////Building an ATM App////////////////////////////////////////////////////////

	/*void showMenu() {
		cout << "*************Menu**************\n";
		cout << "1. Check Balance" << endl;
		cout << "2. Deposit" << endl;
		cout << "3. Withdrawl" << endl;
		cout << "4. Exit" << endl;
		cout << "********************************\n" << endl;
	}

	int main() {

		int option;
		double balance = 500;

		do {
			showMenu();
			cout << "Please Select an Option: ";
			cin >> option;
			system("cls");

			switch (option)
			{
			case 1: cout << "Balance is: " << "$" << balance << endl; break;
			case 2: cout << "Deposit amount: ";
				double depositAmount;
				cin >> depositAmount;
				balance += depositAmount;
				break;
			case 3: cout << "Withdraw Amount: ";
				double withdrawAmount;
				cin >> withdrawAmount;
				if (withdrawAmount <= balance)
					balance -= withdrawAmount;
				else
					cout << "Insufficent funds..\n";
				break;
			}
		} while (option != 4);


		system("pause>0");
	}
	*/

//--------------------------------------------------------------------------------------------------------------------------------------

/////////////////////////////////////////////////////////// Strings ////////////////////////////////////////////////////////////////////

	/*int main() {
	std::string myString;
	myString = "Buddy is the best dog ";
	std::string iswhat = "around ";
	std::string where = "the world!";
	myString += (iswhat + where);
	std::cout << myString << std::endl;

	return 0;
	}
	*/
//--------------------------------------------------------------------------------------------------------------------------------------

/////////////////////////////////////////////////////////// Arrays ////////////////////////////////////////////////////////////////////
 
/*	int myArray[4]{25,30,2,37};
	//myArray[0] = 25;
	//myArray[1] = 30;
	//myArray[2] = 2;
	//myArray[3] = 37;

	for (int i = 0; i < 4; i++) {
		std::cout << "My Array is [" <<i<< "] "<<myArray[i] << std::endl;
	}
	return 0;
}
*/
// -------------------------------------------------------------------------------------------------------------------------------------

////////////////////////////////////////////////////////////Vectors/////////////////////////////////////////////////////////////////////
	/*int nums;

	int main() {

		vector <int> nums{ 10,20,30,40,50 };
		for (int i{ 0 }; i < nums.size(); i++)
			cout << nums[i] << endl;

		return 0;
	}*/

//---------------------------------------------------------------------------------------------------------------------------------------

/////////////////////////////////////////////////////////////// Enums ///////////////////////////////////////////////////////////////////
 
/*	int main() {
	enum DoggyMovement {
		DM_Jump,
		DM_Bolt,
		DM_Zip,
		DM_Zoomies
	};

	DoggyMovement ready = DM_Zoomies;

	if (ready == DM_Zoomies) {
		std::cout << "Zipping across the lawn!" << std::endl;
	}
	return 0;
}
*/
//--------------------------------------------------------------------------------------------------------------------------------------

////////////////////////////////////////////// Using a Switch Statement with Enums //////////////////////////////////////////////////////

/*	enum DoggyMovement {
		DM_Jump,
		DM_Bolt,
		DM_Zip,
		DM_Zoomies
	};

	const float zipping = 700.f;
	const float bolting = 800.f;
	const float flying = 10000.f;
	const float zoomirez = 15000.f;


	    
	void Updatedmovementspeed(DoggyMovement move, float& speed);

	int main() 
	{

		
		float movement;
		DoggyMovement status = DM_Jump; // using staus and movement in place of move and speed to avoid the same word and create confusion


		
		
		Updatedmovementspeed(status, movement); 

		std::cout << "movements speed = " << movement << std::endl;

		system("pause");

	}


	void Updatedmovementspeed(DoggyMovement move, float& speed) {

		switch (move) {
		case DM_Jump:
			speed = flying;
			break;
		case DM_Bolt:
			speed = bolting;
			break;
		case DM_Zip:
			speed = zipping;
			break;
		case DM_Zoomies:
			speed = zoomirez;


		}
	};
	*/
//----------------------------------------------------------------------------------------------------------------------------------

/////////////////////////////////////////////////////////////Structs////////////////////////////////////////////////////////////////
 
	 /*
	 struct Player {

		string Name;
		int level;
		int power;
		float Health;

	};


	Player Joe = { "Joe", 500, 200, 50 };



	void Display() {

		std::cout << "Joes Name is " << Joe.Name << std::endl;
		std::cout << "Joes Level is " << Joe.level << std::endl;
		std::cout << "Joes Power is " << Joe.power << std::endl;
		std::cout << "Joes Health is " << Joe.Health << std::endl;
	};



	int main() {


		Display();

		Player Joe;
		Joe.Name = "joe";
		Joe.level = 10;
		Joe.power = 300;
		Joe.Health = 20;
	

		std::cout<<Joe.Name << std::endl;


		return 0;
	}*/
//-------------------------------------------------------------------------------------------------------------------------------------

//////////////////////////////////////////////////////Structs and Pointers/////////////////////////////////////////////////////////////

/*	struct BuddyTheElf {
		string place;
		string type;
		int age;

	};

	BuddyTheElf dog{ "northpole", "elf", 3000 };
	BuddyTheElf* elves = &dog;
	std::cout << elves->place << std::endl;
	std::cout << elves->type << std::endl;
	std::cout << elves->age << std::endl;


	BuddyTheElf cat{ "southpole", "evil elf", 500000 };
	BuddyTheElf* evilelves = &cat;
	std::cout << evilelves->place << std::endl;
	std::cout << evilelves->type << std::endl;
	std::cout << evilelves->age << std::endl;

	return 0;
}*/

//-----------------------------------------------------------------------------------------------------------------------------------

/////////////////////////////////////////////////Classes with Parent and Child and Inheritance///////////////////////////////////////////////////////////////////
 
	/*class Dog {
	public:
		Dog();
		float Age;
		int Health;

		Dog(std::string name, int age, int health);
	
		void Records();

	protected:
		std::string Name;

	};

	class Yorkie : public Dog {
	public:
		Yorkie();
		Yorkie(std::string name, float age, int health);

		void SetName(std::string name);
		std::string GetName();
	};

	
	int main() {
	
		Dog dog;
		dog.Records();

		Yorkie yorkie;
		yorkie.SetName("Remi");
		std::cout << yorkie.GetName() << std::endl;
	
		yorkie.Records();

		return 0;

	}*/

	// Example 2 Classes with pushback
	/*#include<iostream>
	#include<list>
	using namespace std;

	class Sports {
	public:
		string Name;
		string OwnerName;
		int playercount;
		list<string> teamsInDivision;

		Sports(string name, string ownerName) {
			Name = name;
			OwnerName = ownerName;
			playercount = 0;
		}
		void GetInfo() {
			cout << "Name: " << Name << endl;
			cout << "Owners Name: " << OwnerName << endl;
			cout << "Number Of Players: " << playercount << endl;
			cout << "Divisional Teams: " << endl;
			for (string divisionteams : teamsInDivision) {
				cout << divisionteams << endl;
			}
		}
	};

	int main() {
		{
			Sports sports("Texans", "Cal McNair");
			sports.playercount = 52;
			sports.teamsInDivision.push_back("Jacksonville Jaguars");
			sports.teamsInDivision.push_back("Indianapolis Colts");
			sports.teamsInDivision.push_back("Tennesse Titans");

			Sports sports2("Dallas Cowboys", "Jerry Jones");

			sports.GetInfo();
			sports2.GetInfo();
		}
		system("pause>0");
	};*/


//----------------------------------------------------------------------------------------------------------------------------------

////////////////////////////////////////////////////////Examples //////////////////////////////////////////////////////////////

	/*class Dog {
	public:

		Dog();
		float Age;
		int Health;

		Dog(std::string name, int age, int health);

		void Records();

	protected:
		std::string Name;

	};


		class Yorkie : public Dog {
		public:
			Yorkie();
			Yorkie(std::string name, float age, int health);

			void SetName(std::string name);
			std::string GetName();
		};

	Dog::Dog() {
		Name = "Buddy";
		Age = 2;
		Health = 100;
	}

	Dog::Dog(std::string name, int age, int health) : Name(name), Age(age), Health(health) {

		Records();
	}

	void Dog::Records() {
		std::cout << "Name " << Name << std::endl;
		std::cout << "Age " << Age << std::endl;
		std::cout << "Health " << Health << std::endl;


	}

	Yorkie::Yorkie() {
	Name = "Buddy";
	Age = 1.5;
	Health = 110;
	}


	void Yorkie::SetName(std::string name) {

		Name = name;

	}

	std::string Yorkie::GetName() {

		return Name;
	}*/
//-----------------------------------------------------------------------------------------------------------------------------------

///////////////////////////////////////////////////////////Examples on Deleting ///////////////////////////////////////////////////////////////////
	/*struct Character
	{
		Character();
		~Character();
		string *Name;
		int *age;
		float* Health;

	};

	int main()
	{
		for (int i = 0; i < 10; i++) {

			Character* PtrToChar = new Character();

			std::cout <<"Name: "<< PtrToChar->Name << std::endl;
			std::cout <<"Age: "<< PtrToChar->age << std::endl;
			std::cout <<"Health: "<< PtrToChar->Health << std::endl;
			std::cout << "\n" << std::endl;
			delete PtrToChar;
		}


		return 0;
	};*/

	/*Character::Character()
	{
		Name = new string ("Jen");
		age = new int(26);
		Health = new float (100);
	};

	Character::~Character()
	{
		delete Name;
		delete age;
		delete Health;
	};


//Example 2

	class Creature {
		public:

		Creature() {

			std::cout << "A creature came to life! " <<std::endl;
			++CreatureNumber;
		}

		static void Announce() {

			std::cout << CreatureNumber << std::endl;
		}

		static int CreatureNumber;

		~Creature() {

			std::cout << " A creature has died! " << std::endl;

		}

	};

	int Creature::CreatureNumber=0;


	int main() {

		Creature::Announce();
		Creature crit;
		Creature::Announce();

		return 0;

};*/
//---------------------------------------------------------------------------------------------------------------------------------------

//////////////////////////////////////////Example of using Classes,Functions,For Loop and Arrays/////////////////////////////////////////

	/*class Animal
	{
	public: 
	
	
		virtual void AnimalFunction()
		{
			std::cout << "An animal is created" << std::endl;
		}
		};

	class Dog : public Animal 
	{
	 public:
	
		void DogFunction()
		{
			std::cout << "A Dog is created" << std::endl;
		}
		};

	class Yorkie : public Dog 
	{
	public:

		void YorkieFunction() 
		{
			std::cout << "A Yorkie is created" << std::endl;
		}
		};


	int main() {

		Animal* ptr_to_animal = new Animal;

		Dog* ptr_to_dog = new Dog;

		Yorkie* ptr_to_yorkie = new Yorkie;

		Animal* AnimalArray[] = { ptr_to_animal, ptr_to_dog, ptr_to_yorkie };

		for (int i = 0; i < 3; i++)
		{

			Animal* animal = AnimalArray[i];


			Animal* anm = dynamic_cast<Animal*>(animal);

			if (anm) {

				anm->AnimalFunction();

			}

			Dog* dog = dynamic_cast<Dog*>(animal);

			if (dog)
			{
				dog->DogFunction();
			}
			Yorkie* york = dynamic_cast<Yorkie*>(animal);

			if (york)
			{
				york->YorkieFunction();
			}
		}
		delete ptr_to_animal;
		delete ptr_to_dog;
		delete ptr_to_yorkie;

		return 0;
	};*/
//---------------------------------------------------------------------------------------------------------------------------------------

//////////////////////////////////////////////////////////////Stateful Lambda Expressions////////////////////////////////////////////////

	/*int x = 100;
	int main() {
		auto l = [x]() mutable {
			x += 100;
			std::cout << x << std::endl;
			};

		l();
		std::cout << x << std::endl;
		l();
		std::cout << x << std::endl;

	}*/

//---------------------------------------------------------------------------------------------------------------------------------------

///////////////////////////////////////////////////////////////////////Pointers//////////////////////////////////////////////////////////

	/*void printNumber(int* numberPtr) {
		cout << *numberPtr << endl;
	}
	void printLetter(char* charPtr) {
		cout << *charPtr << endl;
	}
	int main() {

		int number = 5;
		printNumber(&number);

		char letter = 'a';
		printLetter(&letter);
	}*/

	//Example 2 Pass by Reference using pointers

	/*int getMin(int numbers[], int size) {
		int min = numbers[0];
		for (int i = 0; i < size; i++) {
			if (numbers[i] < min)
				min = numbers[i];
		}
		return min;
	}


	int getMax(int numbers[], int size) {
		int max = numbers[0];
		for (int i = 0; i < size; i++) {
			if (numbers[i] > max)
				max = numbers[i];
		}
		return max;
	}

	void getMinAndMax(int numbers[], int size, int* min, int* max) {
		for (int i = 0; i < size; i++) {
			if (numbers[i] > *max)
				*max = numbers[i];
			if (numbers[i] < *min)
				*min = numbers[i];

		}
	}
	int main() {

		int numbers[5] = { 7,13,-23,-65,99 };
		int min = numbers[0];
		int max = numbers[0];
		getMinAndMax(numbers, 5, &min, &max);
		cout << "Min is" << min << endl;
		cout << "Max is" << max << endl;

		system("pause>0");
		return 0;
	}*/
