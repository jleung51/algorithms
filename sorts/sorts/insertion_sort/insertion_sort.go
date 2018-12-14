// This Golang program contains the implementation of an insertion sort
// algorithm on an array of float64 values.

package insertion_sort

func InsertionSort(arr []float64) {
	for i, v := range arr {
		j := i
		for j > 0 && arr[j-1] > v {
			arr[j] = arr[j-1]
			j -= 1
		}
		arr[j] = v
	}
}
