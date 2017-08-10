def palin(item, start, end):
	left = item[start]
	right = item[end]
	count = 0
	while start < end:
		if left < right:
			start += 1
			left += item[start]
			count += 1
		elif left > right:
			end -= 1
			right += item[end]
			count += 1
		else:
			start += 1
			end -= 1
			left = item[start]
			right = item[end]
	return count

def main():
	n = int(intput().strip())
	item = [int(x) for x in input().strip().split()]
	count = palin(item, 0, n-1)
	print(count)

if __name__ == '__main__':
	main()