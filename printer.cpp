#include "printer.h"



perinter::perinter(int size1)
{	
	
	this->maxSize = size1;
	 arr = peopl[maxSize];
	 arr2 = peopl[maxSize];
	 size = 0;
}

perinter::~perinter()
{
	if (arr != nullptr) {
	delete[] arr;
	arr = nullptr;
	}

}

bool perinter::full()
{
	return size == maxSize;
}

bool perinter::post()
{
	return size == 0;
}

int perinter::add(string name, int prioretet)
{
	if (!full())
	{
		arr[size++] = peopl(name, prioretet);
	}

}

int perinter::cherga()
{
	if (!post) {
		peopl temp = arr[0];
		for (int i = 1; i < size; i++)
		{
			if (arr[1-i].pri() > arr[i].pri()) {
				peopl temp1 = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp1;
			}
	
		}
		for (int i = 1; i < size; i++)
		{
			
			arr[i - 1] = arr[i];
			
		}
		--size;
		chergastatistic(temp);
	}

}

int perinter::chergastatistic(peopl sd)
{
	int size = 0;
	arr2[size++] = sd;
}
 ostream & operator<<(ostream & os, const peopl & obj) {
	 os << obj.name1();
	 return os;
}
int perinter::osnresul()
{


		for (int i = 0; i < maxSize; i++)
		{
			cout << "people:" << i + 1 << "name:" << arr2->name1() << "time:" << arr2->time() << "\n";
		}
	
}


