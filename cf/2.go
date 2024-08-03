package main

import (
	"fmt"
	"math"
)

type Point struct {
	X, Y int
}

func euclideanDistance(p1, p2 Point) float64 {
	return math.Sqrt(math.Pow(float64(p1.X-p2.X), 2) + math.Pow(float64(p1.Y-p2.Y), 2))
}

func farthestPoints(points []Point) map[int]int {
	farthestPoints := make(map[int]int)
	for i, p1 := range points {
		maxDistance := 0.0
		var farthestPointID int
		for j, p2 := range points {
			if i != j { 
				distance := euclideanDistance(p1, p2)
				if distance > maxDistance {
					maxDistance = distance
					farthestPointID = j + 1
				}
			}
		}
		farthestPoints[i+1] = farthestPointID
	}
	return farthestPoints
}

func main() {
	var N int
	fmt.Scan(&N)

	points := make([]Point, N)
	for i := 0; i < N; i++ {
		var x, y int
		fmt.Scan(&x, &y)
		points[i] = Point{X: x, Y: y}
	}

	farthestPointsIDs := farthestPoints(points)
	for _, farthestPointID := range farthestPointsIDs {
		fmt.Println(farthestPointID)
	}
}
