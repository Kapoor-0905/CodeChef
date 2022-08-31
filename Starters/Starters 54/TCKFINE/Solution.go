package main

import "fmt"

func main() {
	var t, x, p, q int
	fmt.Scan(&t)
	for i := 0; i < t; i++ {
		fmt.Scan(&x, &p, &q)
		fmt.Println((p - q) * x)
	}
}
