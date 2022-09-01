import unittest

from conception_orientee_objet import add


class TestAdder(unittest.TestCase):
    def test_adder_integers(self):
        self.assertEqual(add(4, 3), 7)


if __name__ == "__main__":
    unittest.main()
