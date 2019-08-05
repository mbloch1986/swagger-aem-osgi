//
// ComDayCqMailerImplCqMailingServiceProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


open class ComDayCqMailerImplCqMailingServiceProperties: JSONEncodable {

    public var maxRecipientCount: ConfigNodePropertyString?

    public init() {}

    // MARK: JSONEncodable
    open func encodeToJSON() -> Any {
        var nillableDictionary = [String:Any?]()
        nillableDictionary["max.recipient.count"] = self.maxRecipientCount?.encodeToJSON()

        let dictionary: [String:Any] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
