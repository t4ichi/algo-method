PI = 3.14

def calc_area_circle(r):
    return PI * (r ** 2)

def print_area_circle(r):
    print(f"半径 {r} cm の円の面積は {calc_area_circle(r)} cm^2")

def calc_volume_cylinder(r, h):
    return calc_area_circle(r) * h

def print_volume_cylinder(r, h):
    print(f"底面の半径が {r} cm、高さが {h} cm の円柱の体積は {calc_volume_cylinder(r,h)} cm^3")

print_area_circle(3)
print_area_circle(5)
print_area_circle(10)

print_volume_cylinder(2, 4)
print_volume_cylinder(6, 10)
print_volume_cylinder(10, 3)