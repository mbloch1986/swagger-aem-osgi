note
 description:"[
		Adobe Experience Manager OSGI config (AEM) API
 		Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
  		OpenAPI spec version: 1.0.0-pre.0
 	    Contact: opensource@shinesolutions.com

  	NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

 		 Do not edit the class manually.
 	]"
	date: "$Date$"
	revision: "$Revision$"
	EIS:"Eiffel openapi generator", "src=https://openapi-generator.tech", "protocol=uri"
class COM_DAY_CQ_DAM_CORE_IMPL_DAM_EVENT_RECORDER_IMPL_PROPERTIES 

inherit

  ANY
      redefine
          out 
      end


feature --Access

    event_filter: detachable CONFIG_NODE_PROPERTY_STRING 
      
    event_queue_length: detachable CONFIG_NODE_PROPERTY_INTEGER 
      
    eventrecorder_enabled: detachable CONFIG_NODE_PROPERTY_BOOLEAN 
      
    eventrecorder_blacklist: detachable CONFIG_NODE_PROPERTY_ARRAY 
      
    eventrecorder_eventtypes: detachable CONFIG_NODE_PROPERTY_DROP_DOWN 
      

feature -- Change Element  
 
    set_event_filter (a_name: like event_filter)
        -- Set 'event_filter' with 'a_name'.
      do
        event_filter := a_name
      ensure
        event_filter_set: event_filter = a_name		
      end

    set_event_queue_length (a_name: like event_queue_length)
        -- Set 'event_queue_length' with 'a_name'.
      do
        event_queue_length := a_name
      ensure
        event_queue_length_set: event_queue_length = a_name		
      end

    set_eventrecorder_enabled (a_name: like eventrecorder_enabled)
        -- Set 'eventrecorder_enabled' with 'a_name'.
      do
        eventrecorder_enabled := a_name
      ensure
        eventrecorder_enabled_set: eventrecorder_enabled = a_name		
      end

    set_eventrecorder_blacklist (a_name: like eventrecorder_blacklist)
        -- Set 'eventrecorder_blacklist' with 'a_name'.
      do
        eventrecorder_blacklist := a_name
      ensure
        eventrecorder_blacklist_set: eventrecorder_blacklist = a_name		
      end

    set_eventrecorder_eventtypes (a_name: like eventrecorder_eventtypes)
        -- Set 'eventrecorder_eventtypes' with 'a_name'.
      do
        eventrecorder_eventtypes := a_name
      ensure
        eventrecorder_eventtypes_set: eventrecorder_eventtypes = a_name		
      end


 feature -- Status Report

    out: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass COM_DAY_CQ_DAM_CORE_IMPL_DAM_EVENT_RECORDER_IMPL_PROPERTIES%N")
        if attached event_filter as l_event_filter then
          Result.append ("%Nevent_filter:")
          Result.append (l_event_filter.out)
          Result.append ("%N")    
        end  
        if attached event_queue_length as l_event_queue_length then
          Result.append ("%Nevent_queue_length:")
          Result.append (l_event_queue_length.out)
          Result.append ("%N")    
        end  
        if attached eventrecorder_enabled as l_eventrecorder_enabled then
          Result.append ("%Neventrecorder_enabled:")
          Result.append (l_eventrecorder_enabled.out)
          Result.append ("%N")    
        end  
        if attached eventrecorder_blacklist as l_eventrecorder_blacklist then
          Result.append ("%Neventrecorder_blacklist:")
          Result.append (l_eventrecorder_blacklist.out)
          Result.append ("%N")    
        end  
        if attached eventrecorder_eventtypes as l_eventrecorder_eventtypes then
          Result.append ("%Neventrecorder_eventtypes:")
          Result.append (l_eventrecorder_eventtypes.out)
          Result.append ("%N")    
        end  
      end
end


