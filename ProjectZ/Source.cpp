#include<iostream>
#include<string>
#include<iomanip>
#include<vector>
#include<functional>
#include<algorithm>
#include<memory>

using namespace std;



//////////////////////////////////////////////////// EXAMPLES OF BASIC OF C++ ///////////////////////////////////////////////////////////////

//int main() {

///////////////////////////////////////////////// Converting char to int ////////////////////////////////////////////////////////////////

		/*char i1, i2, i3, i4, i5;
		cout << "please enter 5 lettters to be coverted to a number " << std::endl;
		cin >> i1 >> i2 >> i3 >> i4 >> i5;
		cout << int('i1')<<" " << int('i2') << " " << int('i3') << " " << int('i4') << " " <<int('i5') << " " << std::endl;*/

//---------------------------------------------------------------------------------------------------------------------------------------

//////////////////// Entering code to define between odd and even using a % to show if its divisible by 2 using a if else statement //////

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
		{	if (counter % 3 == 0 && counter % 5 == 0)
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
	/*int main() {
		int luckyNumbers[5];
		//cout << luckyNumbers[2] << endl; // gives variable in array
		//cout << &luckyNumbers[2] << endl; // gives address in array
		for (int i = 0; i <= 4; i++) {
			cout << "Number: ";
			cin >> luckyNumbers[i];
		}
		for (int i = 0; i <= 4; i++) {
			cout << &luckyNumbers[i] << endl; //prints address for array
			cout << luckyNumbers[i] << endl;	//prints variables entered 

		}
	return 0;
}*/
		//Example of Dynamic Array:

	/*int main() {

		int size;
		cout << "Size: ";
		cin >> size;

		int* myArray = new int[size];

		for (int i = 0; i < size; i++)
		{
			cout << "Array[ " << i << " ] ";
			cin >> myArray[i];
		}
		for (int i = 0; i < size; i++) {
			cout << myArray[i] << " ";
		}
		delete[]myArray;
		myArray = NULL;

		return 0;
}*/

//Multidimensional Array

/*int main() {
	
	int rows, columns;
	cout << "rows, columns ";
	cin >> rows >> columns;

	int** table = new int* [rows];      //creating table and rows
	for (int i = 0; i < rows; i++) {    //creating columns from the rows and table established
		table[i] = new int[columns];
	}
	for (int i = 0; i < rows; i++) {    //deleting the dynamic memory back to the static memory
		delete[] table[i];
	}
	delete [] table;
	table = NULL;

	return 0;
}*/
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




/*void print(void* ptr, char type) {
	switch (type) {
	case'i':cout << *((int*)ptr) << endl; break;
	case'c':cout << *((char*)ptr) << endl; break;
	}*/


/*int main() {

	int n = 5;
	char letter ='a';
	print(&number,'i');
	print(&letter,'c');
}
{
	int n = 5;
	cout << &n << endl;  //& accesses the address of the variable
	int* ptr = &n;       // * is to use the pointer and we're using the variable ptr to store the address of the variable &n
	cout << ptr << endl;  // displays that pointer address of the variable,,,
	cout << *ptr << endl; //but using *ptr derefences the pointer and gives you the actual varaible as apposed to the address
	*ptr = 10;             // changing the variable by using the pointer from 5 to 10
	cout << *ptr << endl;  // now both the derenfced pointer and the actual variable n are now both 10
	cout << n << endl;

}*/



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

	/*Function pointers
	int add(int a, int b) {           //creating the function
		return a + b;
	}
	int main() {
		int (*functPtr) (int, int) = add;     //is calling that function but making it a pointer 
		cout << add(2, 3) << endl;
		cout << functPtr(3, 4) << endl;


	}*/

	//Unique Pointers 
	/*int main() {
		unique_ptr<int>unPtr1 = make_unique<int>(25);
		cout << unPtr1 << endl;							//unique pointersa cant be shared but can be moved 
		unique_ptr<int>unPtr2 = move(unPtr1);			//moved ownership to different unique pointer
	}*/

	//Deleting a unique pointer 

	/*class MyClass {
	public:
		MyClass() {
			cout << "Constructor created" << endl;
		}
		~MyClass() {
			cout << "Destructor invoked" << endl;
		}
	};

		int main() {
			{
				unique_ptr<MyClass>unPtr1 = make_unique<MyClass>();
			}
			return 0;
		}
		*/
	//Shared Pointer

	/*class MyClass {
	public:
		MyClass() {
			cout << "Constructor created" << endl;
		}
		~MyClass() {
			cout << "Destructor invoked" << endl;
		}
	};

	int main() {
		{
			shared_ptr<MyClass>shrPtr1 = make_shared<MyClass>();
			cout << "Shared count: " << shrPtr1.use_count() << endl;
			shared_ptr<MyClass>shrPtr2 = shrPtr1;
			cout << "Shared count: " << shrPtr1.use_count() << endl;
		}
		return 0;
	}*/

	// Weak Pointers

	/*class MyClass {
	public:
		MyClass() {
			cout << "Constructor created" << endl;
		}
		~MyClass() {
			cout << "Destructor invoked" << endl;
		}
	};

	int main() {
		weak_ptr<int> weakPtr1;
		{	
			shared_ptr<int>shrPtr1 = make_shared<int>(25);
			weakPtr1 = shrPtr1;
		}
		return 0;
	}*/

//////////////////////////////////////////////////////////Binary Trees///////////////////////////////////////////////////////////////////

	/*struct Node {

		int data;
		Node* left;
		Node* right;
	};

	Node* createNode(int data) {
		Node* newNode = new Node();
		newNode->data = data;
		newNode->left = newNode->right = nullptr;
		return newNode;
 
 
	 void printTree(Node* root) {
 
		if(root==nullptr)return;

	 // preorder (data,left,right   inorder (left,data,right)  postorder (left,right,data)

		cout<<root->data<<endl;
		printTree(root->left);
		printTree(root->right0;
	 }

	int main() {
		//Level 1
		Node* root = createNode(1);
		//Level 2
		root->left = createNode(2);
		root->right = createNode(3);
		//Level 3
		root->left->left = createNode(4);
		root->left -> right = createNode(5);
		root->right->left = createNode(6);
		root->right->right = createNode(7);
		//Level 4
		root->left->right->left = createNode(9);
		root->right->right->left = createNode(15);

		printTree(root);

		cin.get();
	}*/