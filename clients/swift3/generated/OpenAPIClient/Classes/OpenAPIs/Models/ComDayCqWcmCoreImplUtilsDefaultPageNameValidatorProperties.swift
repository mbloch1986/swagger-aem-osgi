//
// ComDayCqWcmCoreImplUtilsDefaultPageNameValidatorProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


open class ComDayCqWcmCoreImplUtilsDefaultPageNameValidatorProperties: JSONEncodable {

    public var nonValidChars: ConfigNodePropertyString?

    public init() {}

    // MARK: JSONEncodable
    open func encodeToJSON() -> Any {
        var nillableDictionary = [String:Any?]()
        nillableDictionary["nonValidChars"] = self.nonValidChars?.encodeToJSON()

        let dictionary: [String:Any] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}

