#pragma once
//class to hold score entries

using namespace System;
using namespace System::Collections;
namespace oudaAssignment2 {
	public ref class ScoreEntry : public IComparable
	{
	public:
		String ^ name;
		String^ date;
		UInt32 queens;
		Int32 time; //in seconds
		Int32 score;

		ScoreEntry(String^ n, String ^d, UInt32 q, Int32 t, Int32 s) :
			name(n), date(d), queens(q), time(t), score(s) {};
		
		virtual Int32 CompareTo(Object^ obj)
		{
			auto b = dynamic_cast<ScoreEntry^>(obj);
			if (this->score != b->score)
				return b->score- this->score;
			else return this->time-b->time;
		}

		bool operator<(const ScoreEntry^ b)
		{
			if (this->score < b->score)
				return true;
			else if (this->score == b->score)
				return this->time < b->time;
			else return false;
		}
	};
}
	