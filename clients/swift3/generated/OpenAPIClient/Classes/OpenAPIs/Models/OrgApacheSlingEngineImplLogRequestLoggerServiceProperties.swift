//
// OrgApacheSlingEngineImplLogRequestLoggerServiceProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


open class OrgApacheSlingEngineImplLogRequestLoggerServiceProperties: JSONEncodable {

    public var requestLogServiceFormat: ConfigNodePropertyString?
    public var requestLogServiceOutput: ConfigNodePropertyString?
    public var requestLogServiceOutputtype: ConfigNodePropertyDropDown?
    public var requestLogServiceOnentry: ConfigNodePropertyBoolean?

    public init() {}

    // MARK: JSONEncodable
    open func encodeToJSON() -> Any {
        var nillableDictionary = [String:Any?]()
        nillableDictionary["request.log.service.format"] = self.requestLogServiceFormat?.encodeToJSON()
        nillableDictionary["request.log.service.output"] = self.requestLogServiceOutput?.encodeToJSON()
        nillableDictionary["request.log.service.outputtype"] = self.requestLogServiceOutputtype?.encodeToJSON()
        nillableDictionary["request.log.service.onentry"] = self.requestLogServiceOnentry?.encodeToJSON()

        let dictionary: [String:Any] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}

