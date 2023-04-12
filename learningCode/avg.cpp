
int average(int students[], int size)
{
	int total=0;
	for (int i = 0; i < size; i++)
	{
		total += students[i];
	}
	return total / size;
}