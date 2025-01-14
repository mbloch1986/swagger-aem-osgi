//
// ComDayCqWcmCoreImplVariantsPageVariantsProviderImplProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


open class ComDayCqWcmCoreImplVariantsPageVariantsProviderImplProperties: JSONEncodable {

    public var defaultExternalizerDomain: ConfigNodePropertyString?

    public init() {}

    // MARK: JSONEncodable
    open func encodeToJSON() -> Any {
        var nillableDictionary = [String:Any?]()
        nillableDictionary["default.externalizer.domain"] = self.defaultExternalizerDomain?.encodeToJSON()

        let dictionary: [String:Any] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}

