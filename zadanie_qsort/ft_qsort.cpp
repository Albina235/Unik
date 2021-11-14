void	ft_qsort(int *arr, int left, int right)
{
	int	piv;
	int	l = left;
	int	r = right;
	
	piv = arr[l];
	while (left < right)
	{
		while (arr[right] >= piv && left < right)
			right--;
		if (left != right)
		{
			arr[left] = arr[right];
			left++;
		}
		while (arr[left] <= piv && left < right)
			left++;
		if (left != right)
		{
			arr[right] = arr[left];
			right--;
		}
	}
	arr[left] = piv;
	piv = left;
	left = l;
	right = r;
	if (left < piv)
		ft_qsort(arr, left, piv - 1);
	if (right < piv)
		ft_qsort(arr, piv + 1, right);
}
