package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import OrgApacheJackrabbitOakPluginsDocumentSecondarySecondaryStoreCacInfo._

case class OrgApacheJackrabbitOakPluginsDocumentSecondarySecondaryStoreCacInfo (
  pid: Option[String],
title: Option[String],
description: Option[String],
properties: Option[OrgApacheJackrabbitOakPluginsDocumentSecondarySecondaryStoreCacProperties])

object OrgApacheJackrabbitOakPluginsDocumentSecondarySecondaryStoreCacInfo {
  import DateTimeCodecs._

  implicit val OrgApacheJackrabbitOakPluginsDocumentSecondarySecondaryStoreCacInfoCodecJson: CodecJson[OrgApacheJackrabbitOakPluginsDocumentSecondarySecondaryStoreCacInfo] = CodecJson.derive[OrgApacheJackrabbitOakPluginsDocumentSecondarySecondaryStoreCacInfo]
  implicit val OrgApacheJackrabbitOakPluginsDocumentSecondarySecondaryStoreCacInfoDecoder: EntityDecoder[OrgApacheJackrabbitOakPluginsDocumentSecondarySecondaryStoreCacInfo] = jsonOf[OrgApacheJackrabbitOakPluginsDocumentSecondarySecondaryStoreCacInfo]
  implicit val OrgApacheJackrabbitOakPluginsDocumentSecondarySecondaryStoreCacInfoEncoder: EntityEncoder[OrgApacheJackrabbitOakPluginsDocumentSecondarySecondaryStoreCacInfo] = jsonEncoderOf[OrgApacheJackrabbitOakPluginsDocumentSecondarySecondaryStoreCacInfo]
}
