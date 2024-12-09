<?php
function caesarCipher($text, $shift, $action) {
    $result = '';
    $shift = $action === 'decode' ? -$shift : $shift;

    foreach (str_split($text) as $char) {
        if (ctype_alpha($char)) {
            $asciiOffset = ctype_upper($char) ? 65 : 97;
            $result .= chr((ord($char) - $asciiOffset + $shift + 26) % 26 + $asciiOffset);
        } else {
            $result .= $char;
        }
    }
    return $result;
}

if ($_SERVER["REQUEST_METHOD"] == "POST") {
    $text = $_POST['text'] ?? '';
    $shift = (int)($_POST['shift'] ?? 0);
    $action = $_POST['action'] ?? 'encode';

    echo "<h1>Caesar Cipher Result</h1>";
    echo "<p><strong>Original Text:</strong> $text</p>";
    echo "<p><strong>Shift:</strong> $shift</p>";
    echo "<p><strong>Action:</strong> $action</p>";
    echo "<p><strong>Result:</strong> " . caesarCipher($text, $shift, $action) . "</p>";
} else {
    echo "<p>Please submit the form.</p>";
}
?>
