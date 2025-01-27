package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import OrgApacheSlingHcCoreImplServletHealthCheckExecutorServletProperties._

case class OrgApacheSlingHcCoreImplServletHealthCheckExecutorServletProperties (
  servletPath: Option[ConfigNodePropertyString],
disabled: Option[ConfigNodePropertyBoolean],
corsAccessControlAllowOrigin: Option[ConfigNodePropertyString])

object OrgApacheSlingHcCoreImplServletHealthCheckExecutorServletProperties {
  import DateTimeCodecs._

  implicit val OrgApacheSlingHcCoreImplServletHealthCheckExecutorServletPropertiesCodecJson: CodecJson[OrgApacheSlingHcCoreImplServletHealthCheckExecutorServletProperties] = CodecJson.derive[OrgApacheSlingHcCoreImplServletHealthCheckExecutorServletProperties]
  implicit val OrgApacheSlingHcCoreImplServletHealthCheckExecutorServletPropertiesDecoder: EntityDecoder[OrgApacheSlingHcCoreImplServletHealthCheckExecutorServletProperties] = jsonOf[OrgApacheSlingHcCoreImplServletHealthCheckExecutorServletProperties]
  implicit val OrgApacheSlingHcCoreImplServletHealthCheckExecutorServletPropertiesEncoder: EntityEncoder[OrgApacheSlingHcCoreImplServletHealthCheckExecutorServletProperties] = jsonEncoderOf[OrgApacheSlingHcCoreImplServletHealthCheckExecutorServletProperties]
}
