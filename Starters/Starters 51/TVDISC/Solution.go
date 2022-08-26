package main

import "fmt"

func main() {
	var t, a, b, c, d int
	fmt.Scan(&t)
	for i := 0; i < t; i++ {
		if a-c < b-d {
			fmt.Println("First")
		} else if a-c > b-d {
			fmt.Println("Second")
		} else {
			fmt.Println("Any")
		}
	}
}
