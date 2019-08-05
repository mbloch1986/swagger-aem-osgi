package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import ComAdobeCqSocialReportingAnalyticsServicesImplAnalyticsReportIInfo._

case class ComAdobeCqSocialReportingAnalyticsServicesImplAnalyticsReportIInfo (
  pid: Option[String],
title: Option[String],
description: Option[String],
properties: Option[ComAdobeCqSocialReportingAnalyticsServicesImplAnalyticsReportIProperties])

object ComAdobeCqSocialReportingAnalyticsServicesImplAnalyticsReportIInfo {
  import DateTimeCodecs._

  implicit val ComAdobeCqSocialReportingAnalyticsServicesImplAnalyticsReportIInfoCodecJson: CodecJson[ComAdobeCqSocialReportingAnalyticsServicesImplAnalyticsReportIInfo] = CodecJson.derive[ComAdobeCqSocialReportingAnalyticsServicesImplAnalyticsReportIInfo]
  implicit val ComAdobeCqSocialReportingAnalyticsServicesImplAnalyticsReportIInfoDecoder: EntityDecoder[ComAdobeCqSocialReportingAnalyticsServicesImplAnalyticsReportIInfo] = jsonOf[ComAdobeCqSocialReportingAnalyticsServicesImplAnalyticsReportIInfo]
  implicit val ComAdobeCqSocialReportingAnalyticsServicesImplAnalyticsReportIInfoEncoder: EntityEncoder[ComAdobeCqSocialReportingAnalyticsServicesImplAnalyticsReportIInfo] = jsonEncoderOf[ComAdobeCqSocialReportingAnalyticsServicesImplAnalyticsReportIInfo]
}