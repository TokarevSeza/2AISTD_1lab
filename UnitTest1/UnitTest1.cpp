#include "pch.h"
#include "CppUnitTest.h"
#include "../2AISTD_lab1/RBTree.h"
#include "../2AISTD_lab1/Stack.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		RBTree <int, char> tree;

		TEST_METHOD(insert)
		{
			tree.Insert(3, 'a');
			Assert::AreEqual(tree.Find_Element(3), 'a');
		}

		TEST_METHOD(insert1)
		{
			tree.Insert(15, 'a');
			tree.Insert(16, 'b');
			tree.Insert(17, 'c');
			Assert::AreEqual(tree.Find_Element(15), 'a');
			Assert::AreEqual(tree.Find_Element(16), 'b');
			Assert::AreEqual(tree.Find_Element(17), 'c');
		}

		TEST_METHOD(size)
		{
			tree.Insert(15, 'a');
			tree.Insert(16, 'b');
			tree.Insert(17, 'c');
			Assert::AreEqual(tree.Size(), 3);
		}

		TEST_METHOD(find)
		{
			tree.Insert(15, 'a');
			tree.Insert(16, 'b');
			tree.Insert(17, 'c');
			Assert::AreEqual(tree.Find_Element(15), 'a');
			Assert::AreEqual(tree.Find_Element(16), 'b');
			Assert::AreEqual(tree.Find_Element(17), 'c');
		}

		TEST_METHOD(remove)
		{
			tree.Insert(15, 'a');
			tree.Insert(16, 'b');
			tree.Insert(17, 'c');
			tree.Remove(17);
			Assert::AreEqual(tree.Size(), 2);
		}
	};
}
