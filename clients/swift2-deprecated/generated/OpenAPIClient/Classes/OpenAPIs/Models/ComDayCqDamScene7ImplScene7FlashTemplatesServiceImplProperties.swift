//
// ComDayCqDamScene7ImplScene7FlashTemplatesServiceImplProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


public class ComDayCqDamScene7ImplScene7FlashTemplatesServiceImplProperties: JSONEncodable {
    public var scene7FlashTemplatesRti: ConfigNodePropertyString?
    public var scene7FlashTemplatesRsi: ConfigNodePropertyString?
    public var scene7FlashTemplatesRb: ConfigNodePropertyString?
    public var scene7FlashTemplatesRurl: ConfigNodePropertyString?
    public var scene7FlashTemplateUrlFormatParameter: ConfigNodePropertyString?

    public init() {}

    // MARK: JSONEncodable
    func encodeToJSON() -> AnyObject {
        var nillableDictionary = [String:AnyObject?]()
        nillableDictionary["scene7FlashTemplates.rti"] = self.scene7FlashTemplatesRti?.encodeToJSON()
        nillableDictionary["scene7FlashTemplates.rsi"] = self.scene7FlashTemplatesRsi?.encodeToJSON()
        nillableDictionary["scene7FlashTemplates.rb"] = self.scene7FlashTemplatesRb?.encodeToJSON()
        nillableDictionary["scene7FlashTemplates.rurl"] = self.scene7FlashTemplatesRurl?.encodeToJSON()
        nillableDictionary["scene7FlashTemplate.urlFormatParameter"] = self.scene7FlashTemplateUrlFormatParameter?.encodeToJSON()
        let dictionary: [String:AnyObject] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
