//
// ComAdobeCqSocialTranslationImplUGCLanguageDetectorProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation



public struct ComAdobeCqSocialTranslationImplUGCLanguageDetectorProperties: Codable {

    public var eventTopics: ConfigNodePropertyString?
    public var eventFilter: ConfigNodePropertyString?
    public var translateListenerType: ConfigNodePropertyArray?
    public var translatePropertyList: ConfigNodePropertyArray?
    public var poolSize: ConfigNodePropertyInteger?
    public var maxPoolSize: ConfigNodePropertyInteger?
    public var queueSize: ConfigNodePropertyInteger?
    public var keepAliveTime: ConfigNodePropertyInteger?

    public init(eventTopics: ConfigNodePropertyString?, eventFilter: ConfigNodePropertyString?, translateListenerType: ConfigNodePropertyArray?, translatePropertyList: ConfigNodePropertyArray?, poolSize: ConfigNodePropertyInteger?, maxPoolSize: ConfigNodePropertyInteger?, queueSize: ConfigNodePropertyInteger?, keepAliveTime: ConfigNodePropertyInteger?) {
        self.eventTopics = eventTopics
        self.eventFilter = eventFilter
        self.translateListenerType = translateListenerType
        self.translatePropertyList = translatePropertyList
        self.poolSize = poolSize
        self.maxPoolSize = maxPoolSize
        self.queueSize = queueSize
        self.keepAliveTime = keepAliveTime
    }

    public enum CodingKeys: String, CodingKey { 
        case eventTopics = "event.topics"
        case eventFilter = "event.filter"
        case translateListenerType = "translate.listener.type"
        case translatePropertyList = "translate.property.list"
        case poolSize
        case maxPoolSize
        case queueSize
        case keepAliveTime
    }


}
