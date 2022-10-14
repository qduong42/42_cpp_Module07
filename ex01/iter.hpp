template <class addr, class arr_len, class func>
void iter(addr &a, arr_len l, func &f)
{
	for(int i = 0; i < l; i++)
		f(a[i]);
}
