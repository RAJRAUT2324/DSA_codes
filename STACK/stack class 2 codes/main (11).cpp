void printMiddleFromStack(stack<int>& s, int count, int totalSize) {
	//base case
	if(count == totalSize/2) {
		cout << s.top() << endl;
		return;
	}
	//1 case hum solve krenge baaki recursion sambhal lega
	int value = s.top();
	s.pop();
	count++;
	//recursion
	printMiddleFromStack(s,count,totalSize);
	//backtracking 
	s.push(value);
	
}

bool checkSorted(stack<int>& s, int prev) {
	//base case
	if(s.empty()) {
		return true;
	}

	//1 case main solve karega and baaki recursion
	int next = s.top();
	if(next < prev) {
		//not sorted
		return false;
	}
	else {
		//next >= prev -> sorted
		
		//pop top wala element 
		s.pop();
		//prev move to next
		prev = next;
		//recursion
		return checkSorted(s, prev);
	}
}

void insertSorted(stack<int> &s, int value) {
	//base case
	if(s.empty()) {
		s.push(value);
		return;
	}

	//1 case hum, baaki recursion
	if(value <= s.top()) {
		s.push(value);
		return;
	}
	else {
		//value > s.top()
		int topValue = s.top();
		s.pop();
		//recursion
		insertSorted(s,value);
		//backtrack
		s.push(topValue);
	}
	
}


int main() {
	stack<int> s;

	s.push(50);
	s.push(40);
	s.push(30);
	s.push(20);
	s.push(10);

	insertSorted(s, 25);

	cout << "Printing Stack:" << endl;
	while(!s.empty()) {
		cout << s.top() << " ";
		s.pop();
	}
	
	// int prev = INT_MIN;
	// //ascending -> TRUE
	// cout << checkSorted(s,prev);
	// int count = 0;
	// int totalSize = s.size();
	// printMiddleFromStack(s,count, totalSize);


	return 0;
}