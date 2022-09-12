#define _CRT_SECURE_NO_WARNINGS\


// 计数排序
void CountSort(int* a, int n)
{
	int i = 0;
	int max = a[0], min = a[0];
	for (i = 0; i < n; i++)
	{
		if (max < a[i])
			max = a[i];
		if (min > a[i])
			min = a[i];
	}

	//申请一块空间记录数字出现次数
	int* record = (int*)calloc((max - min + 1), sizeof(int));
	if (record == NULL)
	{
		perror("malloc failed");
		exit(-1);
	}

	//计数
	for (i = 0; i < n; i++)
		record[a[i] - min]++;

	int j = 0;
	for (i = 0; i < (max - min + 1); i++)
	{
		while (record[i])
		{
			a[j] = i + min;
			record[i]--;
			j++;
		}
	}

	free(record);
	record = NULL;
}
