teams = {
    "arurus": ["aruru", "erara", "ukuku", "usisi", "totoro"],
    "algos": ["dijkstra", "prim", "kruskal"],
    "ramdoms": ["fadj", "vuiawqpv", "qpcuvauavhjzcrb"],
    "keybords": ["qwerty", "yuiop", "asdf", "ghjkl"],
    "bocchi": ["hitori"]
}

def team_has_c(team_members, c):
    for name in team_members:
        if c in name:
            return True
    return False

def all_teams_have_c(c):
    all_team_has_c = True
    for team_members in teams.values():
        if not team_has_c(team_members, c):
            all_team_has_c = False
            break
    return all_team_has_c

for c_num in range(ord("a"), ord("z") + 1):
    # "a" から "z" までの文字が順番に格納される
    c = chr(c_num)
    if all_teams_have_c(c):
        print(c)