<?php
putenv("GNUPGHOME=".dirname(__FILE__));
error_reporting (E_ALL);
$fingerprint = "64DF06E42FCF2094590CDEEE2E96F141B3DD2B2E";
$passphrase  = "blabla";

$plaintext	=	"foo bar";

$testkey =<<<EOF
-----BEGIN PGP PRIVATE KEY BLOCK-----
Version: GnuPG v1.4.3 (GNU/Linux)

lQHhBENQAKwRBADpy828KU+0SuoetJTrJ5dR86PiO3CsH8K6QRP7wY82Eh/9NTJ3
afRj0FNPaVSP0NciPeM4G4uFoQ3lsIf+FBEPXH1D97/XigWObU8K6ha2/s8wU98z
/samjTHLR+VKZ031B5/8p5Y49yvkkEyBkF1G85yeIXK0WZorKBPncRKuUwCgxOi/
IEa+ZuqHlmlDF2LTRIBOfrkEAK+WLRMWUD0bqj1TYwnxwPWiuns32/ZXLWuPfb5o
crNt7x5LSe7wJhjyIiFhiU0qR33X/FrT2umzOxlRYfINXT9DUHDocxxbED6fxAHw
X2IDd5tWXgCkSBHn2yAneNY6ycPdS3RvqJGlYFg7cOc0kz4urjqRt9fIagzpZQtL
fXHfBACl3EWgvLhVBo5ExZbrtlOA2q0x9UGhhNaSkeBWBr2qDeZErQjMTO0+viaN
/SX0zxeWtM3z06rkUHd1DKORDRM5R7shBTv9/Quojn0gbYbOem+e1mlCe27TRxcP
yeIKk00PqbVuff9QlK9GqKEWGzsEXCmxZ160Dul3CGlf/vQZHf4DAwJAwtVOoL7t
cGBlDCPs4m+HNqT+hD5LGtrx8IC/dnPGNrjFsVybcptYgdn4i6nkSnu+g6a7rcjN
qTUyYrQkdGVzdGtleSAodGVzdGtleSkgPHRlc3RAZXhhbXBsZS5uZXQ+iF4EExEC
AB4FAkNQAKwCGwMGCwkIBwMCAxUCAwMWAgECHgECF4AACgkQLpbxQbPdKy58pwCc
Dz9qEBEVt1gcKCwNay0fm4vLqCkAn1P0KV1giECUVXBuZ5YUndDB1QqtnQFXBENQ
AK0QBACNXzJQG4NHUJqLPImezbl+ii+93MjMo8LpSlv9Np5ruWIKtxuqmVEe4k+r
1DDmSl8hppifpRtx2hefbDTl8Tdf5MNGvf5JE3AHYUehZ+ldjgYCOZ53fJDgKV65
ZidQSGGXsRcyE7SHgMQ6rTL92PA2IQmkcf9xkg6xM2h55UusMwADBQP9EGQ0BAdW
RUtA21/cR6F+t97KZnVSet225UYv8azv8p8cK4R1lrZXChFadK9Kt+/My4HAx7J7
zd1IPuKQ0QniuvuLT3Mwz19B7FGXaJenwTw0P1ihtmSPq9GAOkOA4ZPhHLl9OFwI
eAZzjfshRfvm0haO3vwlxdjhwxyJ/a/JEF3+AwMCQMLVTqC+7XBgepY5Qw0vGNYN
K5jkMtn1Pjj/tzYKJIvneoEXb9lEzV4fpju1q8p+FmKHokwjq6FrEF2edKtuYygj
qNKIrYhJBBgRAgAJBQJDUACtAhsMAAoJEC6W8UGz3SsusGQAn21Jynp2uGE9AnDU
BjoYSlJsrQm0AJ4m57ArwLXA7WXk5iQbMWlvhWCq4g==
=awlp
-----END PGP PRIVATE KEY BLOCK-----
EOF;
?>
