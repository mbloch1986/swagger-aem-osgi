//
// ComAdobeFormsCommonServiceImplFormsCommonConfigurationServiceImpProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


open class ComAdobeFormsCommonServiceImplFormsCommonConfigurationServiceImpProperties: JSONEncodable {

    public var tempStorageConfig: ConfigNodePropertyDropDown?

    public init() {}

    // MARK: JSONEncodable
    open func encodeToJSON() -> Any {
        var nillableDictionary = [String:Any?]()
        nillableDictionary["tempStorageConfig"] = self.tempStorageConfig?.encodeToJSON()

        let dictionary: [String:Any] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
