#COD3D BY N13M4ND

def peakFindex(arr):
    i = 0
    peaks = [] 
    for item in arr:
        if (item == arr[0]):
            if item > arr[1]:
                peaks.append(item)
            else:
                pass
        if (item == arr[len(arr) - 1]): #acho que ta dando erro aqui
            if item > arr[len(arr) - 2]:
                peaks.append(item)
            else: 
                pass
        else:
            if item > arr[i + 1] and item > arr[i - 1]:
                peaks.append(item)
            else:
                pass
        i += 1
    print(peaks)


if __name__ == '__main__':
    #arr = [1, 2, 3, 4, 5, 6, 7, 8, 9] pra esse funfa
    arr = [2, 1, 2, 3, 2, 1, 2, 3, 2, 9]
    peakFindex(arr)