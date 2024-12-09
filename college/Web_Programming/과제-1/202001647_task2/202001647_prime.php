<?php
function findPrimes($start, $end) {
    $primes = [];
    for ($i = $start; $i <= $end; $i++) {
        if ($i < 2) continue;
        $isPrime = true;
        for ($j = 2; $j * $j <= $i; $j++) {
            if ($i % $j == 0) {
                $isPrime = false;
                break;
            }
        }
        if ($isPrime) $primes[] = $i;
    }
    return $primes;
}

if ($_SERVER["REQUEST_METHOD"] == "POST") {
    $start = (int)($_POST['start'] ?? 0);
    $end = (int)($_POST['end'] ?? 0);

    if ($start > $end) {
        echo "<p>Invalid range: start must be less than or equal to end.</p>";
    } else {
        $primes = findPrimes($start, $end);
        if (empty($primes)) {
            echo "<p>No prime numbers found in the range $start to $end.</p>";
        } else {
            echo "<p>Prime numbers in the range $start to $end: " . implode(", ", $primes) . "</p>";
        }
    }
} else {
    echo "<p>Please submit the form.</p>";
}
?>
