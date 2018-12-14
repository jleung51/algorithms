// This Golang program contains the implementation of a selection sort
// algorithm on an array of float64 values.

package selection_sort

func indexOfMin(arr []int) int {
	min := 0
	for j, el := range arr {
		if el < arr[min] {
			min = j
		}
	}
	return min
}

func SelectionSort(arr []int) {
	for i := range arr {
		minIndex := indexOfMin(arr[i:]) + i
		minEl := arr[minIndex]
		var j int
		for j = minIndex; j > i || (j > 0 && arr[j-1] > minEl); j-- {
			arr[j] = arr[j-1]
		}
		arr[j] = minEl
	}
}
