//
// ComDayCqWcmCoreImplReferencesContentContentReferenceConfigProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


open class ComDayCqWcmCoreImplReferencesContentContentReferenceConfigProperties: JSONEncodable {

    public var contentReferenceConfigResourceTypes: ConfigNodePropertyArray?

    public init() {}

    // MARK: JSONEncodable
    open func encodeToJSON() -> Any {
        var nillableDictionary = [String:Any?]()
        nillableDictionary["contentReferenceConfig.resourceTypes"] = self.contentReferenceConfigResourceTypes?.encodeToJSON()

        let dictionary: [String:Any] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
