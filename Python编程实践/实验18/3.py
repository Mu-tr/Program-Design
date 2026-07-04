import folium, os, pandas as pd
from folium.plugins import HeatMap

sanMap = folium.Map(location=[37.76, -122.42], zoom_start=14)
cdata = pd.read_csv('实验18/CrimeData2016.csv')
heatData = cdata[['Y', 'X']].values.tolist()
HeatMap(heatData).add_to(sanMap)
sanMap.save("san_map_学号.html")
os.system("explorer san_map_学号.html")