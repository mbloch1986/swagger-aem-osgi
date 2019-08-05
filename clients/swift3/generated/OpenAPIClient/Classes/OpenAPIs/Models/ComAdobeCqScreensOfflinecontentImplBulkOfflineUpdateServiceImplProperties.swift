//
// ComAdobeCqScreensOfflinecontentImplBulkOfflineUpdateServiceImplProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


open class ComAdobeCqScreensOfflinecontentImplBulkOfflineUpdateServiceImplProperties: JSONEncodable {

    public var comAdobeCqScreensOfflinecontentImplBulkOfflineUpdateServiceImplProjectPath: ConfigNodePropertyArray?
    public var comAdobeCqScreensOfflinecontentImplBulkOfflineUpdateServiceImplScheduleFrequency: ConfigNodePropertyString?

    public init() {}

    // MARK: JSONEncodable
    open func encodeToJSON() -> Any {
        var nillableDictionary = [String:Any?]()
        nillableDictionary["com.adobe.cq.screens.offlinecontent.impl.BulkOfflineUpdateServiceImpl.projectPath"] = self.comAdobeCqScreensOfflinecontentImplBulkOfflineUpdateServiceImplProjectPath?.encodeToJSON()
        nillableDictionary["com.adobe.cq.screens.offlinecontent.impl.BulkOfflineUpdateServiceImpl.scheduleFrequency"] = self.comAdobeCqScreensOfflinecontentImplBulkOfflineUpdateServiceImplScheduleFrequency?.encodeToJSON()

        let dictionary: [String:Any] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
