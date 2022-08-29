package main

import "fmt"

func main() {
	var t, n, m, rem, dem int
	fmt.Scanln(&t)
	for i := 0; i < t; i++ {
		fmt.Scan(&n, &m)
		rem = n % m
		dem = n / m
		if rem == 0 && dem%2 == 0 {
			fmt.Println("YES")
		} else {
			fmt.Println("NO")
		}
	}
}
