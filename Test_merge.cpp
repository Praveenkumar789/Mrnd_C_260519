#include "Mainheader.h";

void test_merge_string()
{
	char *str = "aaabbbcc";
	char *expected = "a3b3c2";
	char *actual = Mergestring(str);
	printf("\n Expected:%s, Actual: %s", expected, actual);

	str = "abcdefg";
	expected = "abcdefg";
	actual = Mergestring(str);
	printf("\n Expected:%s, Actual: %s", expected, actual);

	str = "aaaaaaaaa";
	expected = "a9";
	actual = Mergestring(str);
	printf("\n Expected:%s, Actual: %s", expected, actual);

	str = "aabbccdde";
	expected = "a2b2c2d2e";
	actual = Mergestring(str);
	printf("\n Expected:%s, Actual: %s", expected, actual);
}
