dictionary = {
    'goog': 323,
    'fb': 435,
    'yahoo': 231,
    'appl': 123,
    'msc': 575
}

print(min(zip(dictionary.keys(), dictionary.values())))
print(max(zip(dictionary.keys(), dictionary.values())))
print(sorted(zip(dictionary.keys(), dictionary.values())))
