public class Collection implements Comparable<Collection>{
    
    String photoName;
    String cityName;   
    String timestamp;
    String extension;
      

    public Collection(String photoName, String cityName, String timestamp, String extension) {
        this.photoName = photoName;
        this.cityName = cityName;
        this.timestamp = timestamp;
        this.extension = extension;
       
    }
    
    public String getPhotoName() {
        return photoName;
    }

    public void setPhotoName(String name) {
        this.photoName = name;
    }

    public String getCityName() {
        return cityName;
    }

    public void setCityname(String city) {
        this.cityName = city;
    }

    public String getTimestamp() {
        return timestamp;
    }

    public void setTimestamp(String time) {
        this.timestamp = time;
    }
    
    
    public String getExtension() {
        return extension;
    }

    public void setExtension(String ext) {
        this.extension = ext;
    }
    

    @Override
    public int comparePhotoWithTimestamp(collection entry) {        
        return this.getTimestamp().comparePhotoWithTimestamp(entry.getTimestamp());
    }
                
}
