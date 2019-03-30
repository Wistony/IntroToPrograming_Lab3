using namespace std;

template <typename T>
class Stack {
	int length = 0;
	int maxLength = 0;
	T* array;

public:
	Stack(int);
	~Stack();
	void push(T);
	T pop();
	T top();
	int size();
	bool isEmpty();
};


template <typename T>
Stack<T>::Stack(int N) {
	maxLength = N;
	array = new T[N];
}

template <typename T>
Stack<T>::~Stack() {
	length = 0;
	delete[] array;
}

template <typename T>
void Stack<T>::push(T value) {
	if (length == maxLength)
		cout << "Stack is overflow";

	array[length++] = value;
}

template <typename T>
T Stack<T>::pop() {
	return array[--length];
}

template <typename T>
T Stack<T>::top() {
	return array[length - 1];
}

template <typename T>
int Stack<T>::size() {
	return length;
}

template <typename T>
bool Stack<T>::isEmpty() {
	if (length > 0)
		return false;
	else
		return true;
}
using namespace std;

template <typename T>
class Stack {
	int length = 0;
	int maxLength = 0;
	T* array;

public:
	Stack(int);
	~Stack();
	void push(T);
	T pop();
	T top();
	int size();
	bool isEmpty();
};


template <typename T>
Stack<T>::Stack(int N) {
	maxLength = N;
	array = new T[N];
}

template <typename T>
Stack<T>::~Stack() {
	length = 0;
	delete[] array;
}

template <typename T>
void Stack<T>::push(T value) {
	if (length == maxLength)
		cout << "Stack is overflow";

	array[length++] = value;
}

template <typename T>
T Stack<T>::pop() {
	return array[--length];
}

template <typename T>
T Stack<T>::top() {
	return array[length - 1];
}

template <typename T>
int Stack<T>::size() {
	return length;
}

template <typename T>
bool Stack<T>::isEmpty() {
	if (length > 0)
		return false;
	else
		return true;
}

